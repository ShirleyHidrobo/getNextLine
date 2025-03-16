/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:58:08 by shhidrob          #+#    #+#             */
/*   Updated: 2025/03/16 18:15:38 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*clean_storage(char *storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	prt = ft_strchr(storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (ft_free(&storage));
	}
	else
		len = (ptr - storage) + 1;
	if (!storage[len])
		return (ft_free(&storage));
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	ft_free(&storage);
	if(!new_storage)
		return (NULL);
	return (new_storage);
}

char	*new_line(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	len = (ptr - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*readbuf(int fd, char *storage)
{
	int		rid;
	char	*buffer;

	rid = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		retunr (ft_free(&storage));
	buffer[0] = '\0';
	while (rid > 0 && !ft_strchr(buffer, '\n'))
	{
		rid = read(fd, buff, BUFFER_SIZE);
		if (rid > 0)
		{
			buffer[rid] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (rid == -1)
		return (ft_free(&storage));
	return (storage);
}

char *get_next_line(int fd)
{
	static char	*storage; //line;
	char		*line; //buff;
	//int			result;
	{


		else if (ft_strchr(buf[fd])
		{
			line = ft_strjoin(line, buf[fd];
			buf[fd][0] = 4;
			return (line);
		}
		p = read(fd, buf[fd], BUFFER_SIZE);
		if (p != BUFFER_SIZE)
			eof = 1;
		buf[fd][p] = '\0';
	}
	return (free(line), NULL);
}


BUFFER_SIZE = 10;
static char buf[BUFFER_SIZE + 1];
char *line; //what we are going to return
int	r;

if (buf != NULL)
	//don't read xq aun queda chars que leer antes de que se acaben los 10 + '\0'
if (buf == NULL)
	r = read(fd, buf, BUFFER_SIZE); // read stuff into buffer
if (r == 0 || r == -1)
	return (free(line), NULL);
	//nothing has been read
if (r != BUFFER_SIZE)
	//then we have reached eof at some point inside the buffer
buf[BUFFER_SIZE] = '\0';


//search buffer for a new line
if (strchr(buf, '\n') != NULL) //there is a new line in the buffer
	line = trim(buf, '\n');
	return (line);
else if (strchr(buf '\n') == NULL) // there is NO new line in the buffer
	line = line + buf;




int	main()
{
	int	fd;
	char	*line;
	int	lines;

	lines = 1;
	fd = open("test.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
		printf("%d->%s\n", line++, line);
}



	
