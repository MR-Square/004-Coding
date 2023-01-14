//in this program we will see about pointer to structer
struct student
{
	char name[50];
	int number;
	int age;
};

void ShowStudentName(struct student *st)
{
	printf("\nName: %s\n",st->name);
	printf("Number:: %d\n",st->number);
	printf("age: %d",st->age);	
//	printf("hello");
}


	struct student st1 = {"raza shaikh",5,18};
	ShowStudentName(&st1);

