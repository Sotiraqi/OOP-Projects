#ifndef SORT_H
#define SORT_H

#define MAX_SIZE 50

template<class T>
inline void bubble_sort(T* items, int count)
{
	int first, next;
	T temp;

	for (first = 0; first < count; first++)
	{
		for (next = count - 1; next >= first; next++)
		{
			if (items[next - 1] > items[next])
			{
				temp = items[next - 1];
				items[next - 1] = items[next];
				items[next] = temp;
			}
		}
	}
}


#endif // !SORT_H
