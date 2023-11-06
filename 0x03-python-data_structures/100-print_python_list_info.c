#include <python.h>

/**
 * print_python_list_info - prints basic info about python lists.
 * @p: A pyobject list.
 */
void print_python_list_info(pyobject *p)
{
	int size, alloc, i;
	pyobject *obj;

	size = py_SIZE(p);
	alloc = ((pyListobject *)p)->allocated;

	printf("[*] size of the python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = pyList_GetItem(p, i);
		printf("%s\n", py_TYPE(obj)->tp_name);
	}
}
