#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>

//int main()
//{
//	int age = 10;
//	if (age < 16)
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 16 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 50 && age < 100)
//	{
//		printf("����\n");
//	}
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//}
//	//else
//	//{
//	//	printf("����\n");
//	//}
//
//	return 0;
//}

//����
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//    //�Լ���ģ������⣬û�����ǽ������	 --����ı��˼����Ϊwhileѭ������ˣ�������if��֧���
//	//int a[10] = { 1, 2, 3, 4, 5, 6 };
//	//int i = 0;
//	//int b = 0;
//	//int c = 0;
//	//if (0 == a[i] % 2)
//	//{
//	//	b = a[i];
//	//	printf("ż��Ϊ��%d\n",b);
//	//}
//	//else
//	//{
//	//	c = a[i];
//	//	printf("����Ϊ��%d\n",c);
//	//}
//	//�ο���ʦ
//	//int num;
//	//scanf("������һ������%d\n",num);
//	//if (num % 2 == 1)
//	//{
//	//	printf("����%d\n",num);
//	//}
//	//else
//	//{
//	//	printf("ż����%d\n",num);
//	//}
//	return 0;
//}



//��ӡ1-100���ڵ�����
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("����Ϊ��%d\n",num);
//		}
//		num++;
//	}
//	return 0;
//}


//��ҵ��һ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//���֧���
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
	//if���̫����
	//if (1 == day)
	//{
	//	printf("����1\n");
	//}
	//else if(2 == day)
	//{
	//	printf("����2\n");
	//}
	//else if (3 == day)
	//{
	//	printf("����3\n");
	//}
	//else if (4 == day)
	//{
	//	printf("����4\n");
	//}
	//else if (5 == day)
	//{
	//	printf("����5\n");
	//}

	//switch���
	//switch (day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//}

	//1-5Ϊ������
	//6-7Ϊ��Ϣ��
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;   
//	}
//	return 0;
//}


//��ϰ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//����С��ϰ
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//			if (i == 5)
//				continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF ====> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//whileѭ���������뻺������\n
//int main()
//{
//	int ch = 0;
//	char password[30] = {0};
//	printf("����������:> ");
//	scanf("%s", password);
//	//����whileѭ���������뻺������\n����ջ�����
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):> ");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//forѭ������
//��һ��
//int main()
//{
//	//��ѭ������
//	//Ϊʲô��ѭ����
//	//��forѭ�����жϲ���ʡ�Ե���ʱ��Ĭ�ϱ�ʾ��Ϊ��
//	for (;;)
//		printf("haha\n");

	//1
	//int i = 0;
	//int j = 0;
	//int count = 1;
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("haha:%d\n",count);
	//	    count++;
	//	}
	//}
	////2
	//int a = 0;
	//int b = 0;
	//int num = 1;
	//for (; a < 10; a++)
	//{
	//	for (; b < 10; b++)
	//	{
	//		printf("hehe:%d\n",num);
	//	    num++;
	//	}
	//}


	////����2
	//int x, y;
	//for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}


	//һ��������
	//����ѭ��Ҫѭ�����ٴΣ�
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)    //�ж�����ΪK=0������ֵ����0Ϊ�٣����Բ�ѭ����ֱ�ӽ���
//	{
//		k++;
//	}
//
//	return 0;
//}


//do whileѭ��
//do
//ѭ����䣻
//while (���ʽ);
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%dhehe\n",i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//��ҵ��7�Ŵ�С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������� ");
//	scanf("%d %d %d",&a,&b,&c);
//    if (a>b && a>c && b>c)
//		{
//			printf("%d %d %d",a,b,c);
//		}
//	else if (a>b && a>c && b<c)
//		{
//			printf("%d %d %d",a,c,b);
//		}
//	else if (a<b && a<c && c>b)
//		{
//			printf("%d %d %d",c,b,a);
//		}
//	else if (a>b && a<c && b<c)
//		{
//			printf("%d %d %d",c,a,b);
//		}
//	else if (a<b && c<b && a>c)
//		{
//			printf("%d %d %d", b,a,c);
//		}
//	else if (a<b && c<b && a<c)
//		{
//			printf("%d %d %d", b,c,a);
//		}
//
//	return 0;
//}

//��ҵ��8��ӡ3�ı���
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}


//��ҵ��9���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������� ");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (a%b != 0)
//		{
//			c = a%b;
//			a = b;
//			b = c;
//		}
//	printf("���Լ����%d\n",b);
//	return 0;
//}

//��ҵ��10����
//int main()
//{
//	int a = 0;
//    int count = 0;
//	for (a = 1000; a < 2000; a++)
//	{
//		if (a%4 == 0 && a%100 != 0)
//		{
//			printf("����Ϊ��%d\n", a);
//			count++;
//		}
//		else if (a % 400 == 0 && a % 3200 != 0)
//		{
//			printf("����Ϊ��%d\n", a);
//			count++;
//		}
//	}
//	printf("����ĸ���Ϊ��%d\n",count);
//	return 0;
//}


//��ҵ��11����
//int main()
//{
//	int i = 0;
//	int count = 0;//��¼�����ĸ���
//	for (i = 101; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("�����ĸ���Ϊ��%d\n",count);
//	return 0;
//}

//��ϰ(����)
//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("������%d\n", i);
//			count++;
//		}
//	}
//	printf("�����ĸ���Ϊ��%d\n",count);
//	return 0;
//}

//��ϰ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (a%b != 0)
//	{
//		c = a%b;
//	}
//	printf("���Լ��Ϊ��%d\n",c);
//	return 0;
//}


//����n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int res = 1;
//	scanf("%d",&n);
//	/*while (i <= n)
//	{
//		res = res * i;
//		i++;
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		res = res*i;
//	}
//	printf("���Ϊ��%d\n", res);
//	return 0;
//}


//1!+2!+....+n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;//����׳˵Ľ��
//	int sum = 0;//�����ۼӵĽ��
//	int j = 0;
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		//res = 1;//ÿ�μ���׳ˣ���Ӧ��1��ʼ
//		//for (j = 1; j <= i; j++)
//		//{
//		//	res *= j;
//		//}
//		//�Ż�
//		res *= i;
//		sum += res;
//	}
//	
//	printf("���Ϊ��%d\n", sum);
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 0;
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d",&n);

	//��ͨ����
	
	//int i = 0;

	//for (i = 0; i < 10; i++)
	//{
	//	if (arr[i] == n)
	//	{
	//		printf("�ҵ���\n");
	//		break;
	//	}
	//}
	//if (i == 10)
	//{
	//	printf("�Ҳ���");
	//}
	
	//���ַ����۰���ҷ���
	
	/*int left = 0;
	int right = 9;

	���������±������м�Ԫ�ص��±�
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid+1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±�Ϊ��%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}*/



//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//��ӡ ilove you !!!
//#include<windows.h>
//int main()
//{
//	char arr1[] = "i love you !!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr2) - 1; //������ұ�Ԫ�ص��±�
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��ʱ1000ms����Ҫ��ͷ�ļ�
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;



//}��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char passwords[20] = {0};  //passwords��Ҫ���ô�С������20����Ȼ����ʾ������ջ���⣻ע����
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s",&passwords);
//		//�ж�������ȷ�� - �Ƚ�2���ַ�����С��ϵ
//		//strcmp - �����������Ƚ��ַ�����С��ϵ��
//		//ʹ�øú�������Ҫ��ͷ�ļ��ǣ�string.h
//		if (strcmp(passwords, "021640318") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���벻��ȷ������������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��½ʧ�ܣ��˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.play  ***\n");
//	printf("****  0.exit  ***\n");
//	printf("*****************\n");
//}
//void game()
//{
//	int randnum = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d", &guess);
//		if (guess > randnum)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < randnum)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}


//goto���
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120"); //�ػ�ʱ�䰴����㣬120��-2����
//again:
//	printf("��ע�⣬��ĵ��Խ���2���Ӻ�ػ�\n,������룺��������ȡ���ػ�\n");
//	scanf("%s",&input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�滻goto���
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120"); //�ػ�ʱ�䰴����㣬120��-2����
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���2���Ӻ�ػ�,\n ������룺��������ȡ���ػ�\n");
//		scanf("%s",&input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//��ҵ3
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(-1, i + 1) * 1/i;
//	}
//	printf("sum is:%f\n", sum);
//
//	return 0;
//}

//��ҵ4
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char arr[10] = { 1, 3, 10, 5, 11, 22, 6, 87, 2, 13 };
//	int max = arr[0];  //�����׳��ֵ�arrȫΪ����ʱ�����ֵΪ0�����Զ���max�Ķ���Ӧ��Ϊ����ĵ�һ��Ԫ�أ���������������
//	for (i = 0; i < 10;i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ��%d\n",max);
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t",j,i,j*i);
//			if (i == j)
//				printf("\n");
//		}
//	}
//		
//	return 0;
//}
