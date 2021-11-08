#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
#include"za43tka.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");

	struct Zachetka z = {
		.firstName = "Наталия",
		.middleName = "Михайловна",
		.lastName = "Морозова",
		.zachetkaid = "1БИН18189",
		.terms = {
			{
				.number = 1,
				.year = 2018,
				.subjects =
				{
					{
						.name = "Философия",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "17.01.2019",
						.teacher = "Кораблева"
					},
					{
						.name = "ВМ",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "24.01.2019",
						.teacher = "Райцин"
					},
					{
						.name = "АГиЛА",
						.markType = Exam,
						.mark = {.mark = Sat},
						.date = "01.02.2019",
						.teacher = "Солиев"
					},
					{
						.name = "Англ. Яз.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "25.12.2018",
						.teacher = "Москалева"
					},
					{
						.name = "РЯиКР",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "26.12.2018",
						.teacher = "Морев"
					},
					{
						.name = "Информатика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "26.12.2018",
						.teacher = "Кравченко"
					},
					{
						.name = "Введение в профессию",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "28.12.2018",
						.teacher = "Шаврин"
					},
					{
						.name = "СЭПиТ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "09.01.2019",
						.teacher = "Кораблева"
					}
				}
			},
		{
				.number = 2,
				.year = 2019,
				.subjects =
				{
					{
						.name = "Англ.Яз.",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "28.06.2019",
						.teacher = "Москалева"
					},
					{
						.name = "ВМ",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "02.07.2019",
						.teacher = "Райцин"
					},
					{
						.name = "История",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "24.06.2019",
						.teacher = "Плужникова"
					},
					{
						.name = "Информатика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "18.06.2019",
						.teacher = "Кравченко"
					},
					{
						.name = "ТОЭ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "04.06.2019",
						.teacher = "Орлова"
					},
					{
						.name = "НПБДИ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "Антипов"
					},
					{
						.name = "Комп. граф.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "03.06.2019",
						.teacher = "Рывлина"
					},
					{
						.name = "Физика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "03.06.2019",
						.teacher = "Дегтярев"
					},
					{
						.name = "Физ. культ.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "Королев"
					}
				}
			}

		},


	};

	printf("Студент: %s %s %s\n", z.lastName, z.firstName, z.middleName);
	printf("Номер зачетной книжки : %s \n", z.zachetkaid);
	printf("===============================================================\n");
	for (int i = 0; z.terms[i].number; ++i)
	{

		printf("Cеместр %hu год %hu \n", z.terms[i].number, z.terms[i].year);
		printf("%-20s\t%-6s\t%-11s\t%-20s\r\n", "Предмет", "Оценка", "Дата", "Преподаватель");
		for (int j = 0; z.terms[i].subjects[j].name[0]; j++)
		{
			printf("%-20s\t", z.terms[i].subjects[j].name);
			if (z.terms[i].subjects[j].markType == Zachet)
			{
				printf("%-6s\t",
					z.terms[i].subjects[j].mark.zachet ? "Зачет" : "Не зачет");
			}
			else
			{
				printf("%-6d\t", z.terms[i].subjects[j].mark.mark);
			}
			printf("%-11s\t", z.terms[i].subjects[j].date);
			printf("%-20s\t", z.terms[i].subjects[j].teacher);
			printf("\r\n");
		}
		printf("===============================================================\n");
	}
}