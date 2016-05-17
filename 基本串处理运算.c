//所有实现的运行时间与串的长度成比例
//很多在<string.h>中都有

//Indexed array versions
Compute string length (strlen(a))
	for (i = 0; a[i] != 0; i++); return i;
	
Copy (strcpy(a, b))
	for (i = 0; (a[i] = b[i]) != 0; i++);
	
Compare (strcmp(a, b)) //判断两个串中哪个首先出现在字典中，约定第一个先出现返回负数，相等返回0
	for (i = 0; a[i] == b[i]; i++)
		if (a[i] == 0) return 0;
	return a[i] - b[i];
	
Compare (prefix) (strncmp(a, b, strlen(a)))
	for (i = 0; a[i] == b[i]; i++)
		if (a[i] == 0) return 0;
	if (a[i] == 0) return 0; //针对a长度短的，但前面都一样，也算一样
	return a[i] - b[i];
	
Append (strcat(a, b))
	strcpy(a + strlen(a), b)
	
	
//Equivalent pointer versions
Compute string length (strlen(a))
	b = a; while (*b++); return b-a-1; //这里-1是因为b++了，后面同理
	
Copy (strcpy(a, b))
	while (*a++ = *b++);
	
Compare (strcmp(a, b))
	while (*a++ == *b++)
		if (*(a-1) == 0) return 0;
	return *(a-1) -*(b-1);
	
//后面两个差不多