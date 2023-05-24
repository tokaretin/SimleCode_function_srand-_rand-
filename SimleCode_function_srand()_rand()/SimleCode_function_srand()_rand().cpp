#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	bool alreadyThere;
	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRanomValue = rand() % 100;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRanomValue)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			arr[i] = newRanomValue;
			i++;
		}
	}

	std::cout << "Рандомные уникальные числа: " << '\n';
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << '\n';
	}
	

	std::cout << "\nНаименьшее число в массиве из рандомных: ";
	int minValue = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (minValue > arr[i])
			minValue = arr[i];
	}
		
	std::cout << minValue << '\n';

}

/*Давайте разберем каждую строчку кода по очереди:

bool alreadyThere;: Объявление переменной alreadyThere типа bool, 
которая будет использоваться для проверки наличия значения newRanomValue в массиве arr.

for (int i = 0; i < SIZE; ): Начало цикла for с инициализацией переменной 
i равной 0. Условием продолжения цикла является i < SIZE, где SIZE - это
предварительно объявленная константа, обозначающая размер массива arr. 
Отсутствие инкремента i++ в заголовке цикла означает, что инкрементирование 
будет выполняться внутри цикла при определенных условиях.

alreadyThere = false;: Присваивание переменной alreadyThere значения false. 
Здесь мы предполагаем, что новое случайное значение newRanomValue еще не находится 
в массиве arr.

int newRanomValue = rand() % 10;: Генерация нового случайного значения newRanomValue 
в диапазоне от 0 до 9 с помощью операции % 10. Результатом будет случайное число от 0 до 9.

for (int j = 0; j < i; j++): Вложенный цикл for с инициализацией переменной j равной 
0 и условием продолжения j < i. Этот цикл будет проверять значения, уже находящиеся в 
массиве arr, с целью определить, есть ли уже такое же значение как newRanomValue.

if (arr[j] == newRanomValue): Условное выражение, которое проверяет, равно ли значение 
элемента массива arr[j] значению newRanomValue.

alreadyThere = true;: Присваивание переменной alreadyThere значения true, если обнаружено, 
что newRanomValue уже присутствует в массиве arr.

break;: Выход из цикла for (int j = 0; j < i; j++), если найдено совпадение значений.

if (!alreadyThere): Условное выражение, которое проверяет, если alreadyThere равно false, 
то есть newRanomValue еще не присутствует в массиве arr.

arr[i] = newRanomValue;: Присваивание значению элемента массива arr[i] значения newRanomValue,
если newRanomValue еще не было найдено в массиве arr.

i++;: Инкрементирование переменной i, увеличивая ее значение на 1.

Цикл будет продолжаться,*/

