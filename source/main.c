#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

int main()
{
	int end = 0;

	while (end != 1)
	{
		//�C���D���
		system("cls");
		printf("\n\n  						 �g�c�C�� \n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		printf("                                               ������d����\n\n\n");
		printf("						�J��     1\n\n");
		printf("						���q     2\n\n");
		printf("						�x��     3\n\n");
		printf("						�j�v     4\n\n");
		printf("						�����C�� 5\n\n");

		char k; //������d�Ѽ�
		scanf_s("%c", &k);
		system("cls");

		switch (k)
		{
		//�J�� 1
		case '1':
			//���d����
			printf("�No����X�f�Y���\�L��\n�p���ܡG���V�֨B����o�V�h*��!\n\n");
			printf("\n�}�l�D�ԡGEnter     �^��D���GEsc\n");

			char back1;
			back1 = _getch();

			if (back1 == 13) //�C���}�l
			{
				system("cls");

				//ø�s�g�c
				char a[100][100] = { "######",
									"#o #  ",
									"# ## #",
									"#  # #",
									"##   #",
									"######" }; 
				int i, x = 1, y = 1; //�_�l��m
				for (i = 0; i < 6; i++)
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n\n");

				char ch; //��L��r
				int count = 0; //�p��ϥΨB��

				//x:��u y:���u
				while (x != 1 || y != 5) //�P�_�O�_���X�f a[1][5]�A�b���F�X�f�e����i��
				{
					ch = _getch(); //Ū����J��r
					//�U��
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							a[x][y] = ' '; //���m�ܪť�
							x++;
							a[x][y] = 'o'; //�s��m�� o
							count++; //�h���@�B
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (a[x - 1][y] != '#')
						{
							a[x][y] = ' ';
							x--;
							a[x][y] = 'o';
							count++;
						}
					}
					//����
					if (ch == 'a')
					{
						if (a[x][y - 1] != '#')
						{
							a[x][y] = ' ';
							y--;
							a[x][y] = 'o';
							count++;
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (a[x][y + 1] != '#')
						{
							a[x][y] = ' ';
							y++;
							a[x][y] = 'o';
							count++;
						}
					}
					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					//�L�X���ʫ᪺�x�}
					for (i = 0; i < 6; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n");
				}
				printf("\n���\�L��!!!\n�A�@�@���F%d�B\n\n", count);

				//�P������(1-3���P)
				if (count <= 11)
				{
					printf("������o * * *\n�ӱj�F�a!!!\n");
				}
				else if (count > 11 && count <= 13)
				{
					printf("������o * *\n��������!!!");
				}
				else
				{
					printf("������o *\n�i�H��n!!!\n");
				}
				printf("\n\n-�����N��^�D���-\n");

				//�����N��^��D���(���Fadsw)
				char end1;
				end1 = _getch();
				if (end1!=0&&end1!=65 &&end1 != 68&& end1 != 83 && end1 != 87)
				{
					break;
				}
			}
			else if (back1 == 27)
			{
				system("cls");
			}

			break;
			
			

		//���q 2	
		case '2':
			printf("�O�ɭԮi�{�u�����޳N�F!\n�p���ܡG���V�֨B����o�V�h*��!\n\n");
			printf("\n�}�l�D�ԡGEnter     �^��D���GEsc\n");

			char back2;
			back2 = _getch();

			if (back2 == 13)
			{
				system("cls");
				//ø�s�g�c
				char a[100][100] = { "####################",
									 "#o#                #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "### # # # # ########",
									 "#   # #     #      #",
									 "# # # # ##### #### #",
									 "# ### # #     #  # #",
									 "# # # # ##### # ## #",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     #   #   #   ##",
									 "####################", }; //�g�c�X�f��m�y�� a[17][19]
				int i, x = 1, y = 1;
				for (i = 0; i <20 ; i++) //i<20 ���M��20*20���x�}
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n\n");

				char ch; //��L��r
				int count = 0; //�p��ϥΨB��

				//x:��u y:���u
				while (x != 17 || y != 19) //�P�_�O�_���X�f�A�b���F�X�f�e����i��
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							a[x][y] = ' '; //���m�ܪť�
							x++;
							a[x][y] = 'o'; //�s��m��o
							count++; //�h���@�B
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (a[x - 1][y] != '#')
						{
							a[x][y] = ' ';
							x--;
							a[x][y] = 'o';
							count++;
						}
					}
					//����
					if (ch == 'a')
					{
						if (a[x][y - 1] != '#')
						{
							a[x][y] = ' ';
							y--;
							a[x][y] = 'o';
							count++;
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (a[x][y + 1] != '#')
						{
							a[x][y] = ' ';
							y++;
							a[x][y] = 'o';
							count++;
						}
					}


					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n");

				}
				printf("\n���\�L��!!!\n�A�@�@���F%d�B\n\n", count);

				if (count <= 60)
				{
					printf("������o * * *\n�ӱj�F�a!!!\n");
				}
				else if (count > 60 && count <= 70)
				{
					printf("������o * *\n��������!!!");
				}
				else
				{
					printf("������o *\n�i�H��n!!!\n");
				}
				printf("\n\n-�����N��^�D���-\n");

				char end2;
				end2 = _getch();
				if (end2 == 27)
				{
					system("cls");
					break;
				}
				else
				{
					Sleep(30000);
				}
			}
			else if (back2 == 27)
			{
				system("cls");
				break;
			}

			break;

		



		case '3':
			printf("�A�H�����F���I�������@�w�O�u�����A�����m�����a�ӫ�͡A�����i�D�A�A�b�g�c�������_���ǰe��!\n�Q�n�@�B�n�ѡA�h���ۧa!!!\n");
			printf("�p���ܡG���V�֨B����o�V�h*��!\n���O!!!���藍�n�p�ݤF�ǰe�����¤O\n");
			printf("\n�}�l�D�ԡGEnter     �^��D���GEsc\n");

			char back3;
			back3 = _getch();

			if (back3 == 13)
			{
				system("cls");
				//ø�s�g�c
				char a[100][100] = { "####################",
									 "#o#                #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "### # # # # ########",
									 "#   # #     #      #",
									 "# # # # ### # #### #",
									 "# ### # #     #  # #",
									 "# # # # ##### # ## #",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     # # #   #   ##",
									 "####################", }; //�g�c�X�f��m�y�� a[17][19]
				int i, x = 1, y = 1;
				for (i = 0; i < 20; i++) //i<20 ���M��20*20���x�}
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n\n");

				char ch; //��L��r
				int count = 0; //�p��ϥΨB��

				//x:��u y:���u
				while (x != 17 || y != 19) //�P�_�O�_���X�f�A�b���F�X�f�e����i��
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							a[x][y] = ' '; //���m�ܪť�
							x++;
							a[x][y] = 'o'; //�s��m��o
							count++; //�h���@�B
							if (x == 12 && y == 3)
							{
								a[x][y] = ' ';
								a[1][8] = 'o';
								x = 1;
								y = 8;
							}
							else if (x == 18 && y == 1)
							{
								a[x][y] = ' ';
								a[13][13] = 'o';
								x = 13;
								y = 13;
							}
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (a[x - 1][y] != '#')
						{
							a[x][y] = ' ';
							x--;
							a[x][y] = 'o';
							count++;
							if (x == 17 && y == 17)
							{
								//��쳴�� a[17][17]�A�^����I
								a[x][y] = ' ';
								a[1][1] = 'o';
								x = 1;
								y = 1;
								printf("�o���O�q���X�f������!�ոլݩ�������!\n�ǰe���i��|���U�A~");
								Sleep(6000);
							}
							else if ((x == 5 && y == 18)||(x==17&&y==11))
							{
								//���ǰe�� a[5][18]�A����X�f�e
								a[x][y] = ' ';
								a[17][18] = 'o';
								x = 17;
								y = 18;
							}
							else if (x == 3 && y == 12)
							{
								//���ǰe�� a[5][18]�A����X�f�e
								a[x][y] = ' ';
								a[1][16] = 'o';
								x = 1;
								y = 16;
							}
						}
					}
					//����
					if (ch == 'a')
					{
						if (a[x][y - 1] != '#')
						{
							a[x][y] = ' ';
							y--;
							a[x][y] = 'o';
							count++;
							if (x == 13 && y == 9)
							{
								a[x][y] = ' ';
								a[4][14] = 'o';
								x = 4;
								y = 14;
							}
							else if (x == 18 && y == 1)
							{
								a[x][y] = ' ';
									a[13][13] = 'o';
									x = 13;
									y = 13;
							}
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (a[x][y + 1] != '#')
						{
							a[x][y] = ' ';
							y++;
							a[x][y] = 'o';
							count++;
							if (x == 13 && y == 16)
							{
								//���ǰe�� a[13][16]�A����X�f�e
								a[x][y] = ' ';
								a[17][18] = 'o';
								x = 17;
								y = 18;
							}
							else if (x == 9 && y == 18)
							{
								a[x][y] = ' ';
								a[5][9] = 'o';
								x = 5;
								y = 9;
							}
						}
					}
					
					

					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n");

				}
				printf("\n���\�L��!!!\n�A�@�@���F%d�B\n\n", count);

				if (count <= 40)
				{
					printf("������o * * *\n�ӱj�F�a!!!\n");
				}
				else if (count > 40 && count <= 60)
				{
					printf("������o * *\n��������!!!");
				}
				else
				{
					printf("������o *\n�i�H��n!!!\n");
				}
				printf("\n\n-�����N��^�D���-\n");

				char end3;
				end3 = _getch();
				if (end3 != 0)
				{
					system("cls");
					break;
				}
			}
			else if (back3 == 27)
			{
				system("cls");
				break;
			}

			break;


			

		case '4':
			printf("�o�O�@�ӴݻŪ��@�ɡA�����b�ɶ����}�ѩҦ��K�X�A�ü����D�Ϲq�ܡA�~�����}�g�c�A�Ƥ��y��A�X�o�a!\n"
				"�p���ܡG�V�֨�F����o�V�h*��!\n\n�K�X�}�Ѷ��� 7->8->2\n�`�N�a�Ϥ��Ÿ��P�Ʀr���۹��m!!!\n");
			printf("\n�}�l�D�ԡGEnter     �^��D���GEsc\n");

			char back4;
			back4 = _getch();

			if (back4 == 13)
			{
				time_t ts, te;
				int timer;

				ts = time(NULL);//�p�ɶ}�l
				
				char ch; //��L��r
				int count = 0; //�p��ϥΨB��
				int i;

				system("cls");
				//ø�s�g�c
				char a[100][100] = { "1##################3",
									 "#o#                #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "4## # # # # #######6",
									 "#   # #     #      #",
									 "# # # # ### # #### #",
									 "# ### # #     #  # #",
									 "# # # # ##### # ## 9",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     # # #   #   ##",
									 "*#######0###########"}; //�g�c�X�f��m�y�� a[17][19]
				int x1 = 1, y1 = 1;
				for (i = 0; i < 20; i++) //i<20 ���M��20*20���x�}
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 7\n");

				

				//x:��u y:���u
				while (x1 != 14 || y1 !=3) //�_����m
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (a[x1 + 1][y1] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							a[x1][y1] = ' '; //���m�ܪť�
							x1++;
							a[x1][y1] = 'o'; //�s��m��o
							count++; //�h���@�B
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (a[x1 - 1][y1] != '#')
						{
							a[x1][y1] = ' ';
							x1--;
							a[x1][y1] = 'o';
							count++;
						}
					}
					//����
					if (ch == 'a')
					{
						if (a[x1][y1 - 1] != '#')
						{
							a[x1][y1] = ' ';
							y1--;
							a[x1][y1] = 'o';
							count++;
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (a[x1][y1 + 1] != '#')
						{
							a[x1][y1] = ' ';
							y1++;
							a[x1][y1] = 'o';
							if (x1 == 17 && y1 == 19)
							{
								a[x1][y1] = ' ';
								a[1][1] = 'o';
								x1 = 1;
								y1 = 1;
								printf("�٨S�}�ѱK�X�A�L�k���}�g�c!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 7\n");
				}
				Sleep(2000);
				system("cls");
				printf("�}�ѱK�X 7");
				Sleep(3000);

				system("cls");
				//ø�s�g�c
				char b[100][100] = { "1##################3",
									 "# #                #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "4## # # # # #######6",
									 "#   # #     #      #",
									 "# # # # ### # #### #",
									 "# ### # #     #  # #",
									 "# #o# # ##### # ## 9",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     # # #   #   ##",
									 "*#######0###########"}; //�g�c�X�f��m�y�� a[17][19]
				int x2 = 14, y2 = 3;
				for (i = 0; i < 20; i++) //i<20 ���M��20*20���x�}
				{
					puts(b[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 8\n");

				while (x2 != 14 || y2 != 7) //�_����m
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (b[x2 + 1][y2] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							b[x2][y2] = ' '; //���m�ܪť�
							x2++;
							b[x2][y2] = 'o'; //�s��m��o
							count++; //�h���@�B
							b[14][3] = '7';
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (b[x2 - 1][y2] != '#')
						{
							b[x2][y2] = ' ';
							x2--;
							b[x2][y2] = 'o';
							count++;
							b[14][3] = '7';
						}
					}
					//����
					if (ch == 'a')
					{
						if (b[x2][y2 - 1] != '#')
						{
							b[x2][y2] = ' ';
							y2--;
							b[x2][y2] = 'o';
							count++;
							b[14][3] = '7';
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (b[x2][y2 + 1] != '#')
						{
							b[x2][y2] = ' ';
							y2++;
							b[x2][y2] = 'o';
							count++;
							b[14][3] = '7';
							if (x2 == 17 && y2 == 19)
							{
								a[x2][y2] = ' ';
								a[1][1] = 'o';
								x2 = 1;
								y2 = 1;
								printf("�٨S�}�ѱK�X�A�L�k���}�g�c!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(b[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 8\n");
				}
				Sleep(2000);
				system("cls");
				printf("�}�ѱK�X 8");
				Sleep(3000);

				system("cls");
				//ø�s�g�c
				char c[100][100] = { "1##################3",
									 "# #                #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "4## # # # # #######6",
									 "#   # #     #      #",
									 "# # # # ### # #### #",
									 "# ### # #     #  # #",
									 "# #7# #o##### # ## 9",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     # # #   #   ##",
									 "*#######0###########" }; //�g�c�X�f��m�y�� a[17][19]
				int x3 = 14, y3 = 7;
				for (i = 0; i < 20; i++) //i<20 ���M��20*20���x�}
				{
					puts (c[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 2\n");

				while (x3 != 1 || y3 != 10) //�_����m
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (c[x3 + 1][y3] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							c[x3][y3] = ' '; //���m�ܪť�
							x3++;
							c[x3][y3] = 'o'; //�s��m��Q
							count++; //�h���@�B
							c[14][7] = '8';
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (c[x3 - 1][y3] != '#')
						{
							c[x3][y3] = ' ';
							x3--;
							c[x3][y3] = 'o';
							count++;
							c[14][7] = '8';
						}
					}
					//����
					if (ch == 'a')
					{
						if (c[x3][y3 - 1] != '#')
						{
							c[x3][y3] = ' ';
							y3--;
							c[x3][y3] = 'o';
							count++;
							c[14][7] = '8';
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (c[x3][y3 + 1] != '#')
						{
							c[x3][y3] = ' ';
							y3++;
							c[x3][y3] = 'o';
							count++;
							c[14][7] = '8';
							if (x3 == 17 && y3 == 19)
							{
								a[x3][y3] = ' ';
								a[1][1] = 'o';
								x3 = 1;
								y3 = 1;
								printf("�٨S�}�ѱK�X�A�L�k���}�g�c!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(c[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n�ؼСG�}�ѱK�X 2\n");
				}
				Sleep(2000);

				
				system("cls");
				printf("�}�ѱK�X 2");
				Sleep(2000);
				system("cls");
				printf("\n���\�}�ѩҦ��K�X\n");
				printf("-------------------\n");
				printf("|   7    8    2   |\n");
				printf("-------------------\n\n");
				printf("�qo�ܦ����j���M�_�a@\n");
				printf("�²��I�g�b�a!!!");
				Sleep(3000);

				system("cls");
				//ø�s�g�c
				char d[100][100] = { "1##################3",
									 "# #        @       #",
									 "# # ########## ### #",
									 "# #        # # #   #",
									 "# ######## # # # ###",
									 "#              # # #",
									 "# ##### ###### # # #",
									 "#     # #      #   #",
									 "# ###   # ##########",
									 "#   # # # #        #",
									 "4## # # # # #######6",
									 "#   # #     #      #",
									 "# # # # ### # #### #",
									 "# ### # #     #  # #",
									 "# #7# #8##### # ## 9",
									 "#   # # #     #    #",
									 "# ### # # ##### ####",
									 "#   # # # # #   #   ",
									 "#     # # #   #   ##",
									 "*#######0###########" }; //�g�c�X�f��m�y�� a[17][19]
				int x4 = 1, y4 = 10;
				for (i = 0; i < 20; i++) //i<20 ���M��20*20���x�}
				{
					puts(d[i]); //printf
				}
				printf("\n\n\n***�ϥ�adsw����W�U���k����***\n\n\n");
				
				while (x4 != 17 || y4 != 19) //�X�f��m
				{
					ch = _getch(); //��J��r
					//�U��
					if (ch == 's')
					{
						if (d[x4 + 1][y4] != '#') //�P�_�U�@�Ӧ�m�O�_����
						{
							d[x4][y4] = ' '; //���m�ܪť�
							x4++;
							d[x4][y4] = '@'; //�s��m��Q
							d[1][10] = '2';
						}
					}
					//�W��
					if (ch == 'w')
					{
						if (d[x4 - 1][y4] != '#')
						{
							d[x4][y4] = ' ';
							x4--;
							d[x4][y4] = '@';
							count++;
							d[1][10] = '2';
						}
					}
					//����
					if (ch == 'a')
					{
						if (d[x4][y4 - 1] != '#')
						{
							d[x4][y4] = ' ';
							y4--;
							d[x4][y4] = '@';
							count++;
							d[1][10] = '2';
						}
					}
					//�k��
					if (ch == 'd')
					{
						if (d[x4][y4 + 1] != '#')
						{
							d[x4][y4] = ' ';
							y4++;
							d[x4][y4] = '@';
							count++;
							d[1][10] = '2';
						}
					}

					system("cls"); //��w��X��r�M���A��Ц^��Ĥ@��̫e������m

					for (i = 0; i < 20; i++)
					{
						puts(d[i]);
					}
					printf("\n\n\n***�ϥ�adsw����W�U���k����***\n");
				}

				te = time(NULL);//�p�ɵ���

				timer = te - ts;//�Ҫ᪺�ɶ�

				
				system("cls");
				printf("���\�L��");
				Sleep(500);
				printf("!");
				Sleep(500);
				printf("!");
				Sleep(500);
				printf("!");
				Sleep(500);
				printf("!");
				Sleep(500);
				printf("!\n\n");
				Sleep(1500);


				if (timer > 600)
				{
					printf("����!\n�ڰڰ�! �W�L�ɶ�!@@\n�ݤ�q�FQQ �A�D�Ԥ@���a!");
				}
				else if (timer <= 60)
				{
					printf("����O�~�����å�= =");
				}
				else if (timer>60&&timer <= 180)
				{
					printf("������o * * *\n���񯫪��Ҭ�!!!\n");
				}
				else if (timer > 180 && timer < 240)
				{
					printf("���\�L��!\n������o * *\n�ܼF�`��!!!\n");
				}
				else
				{
					printf("���\�L��!\n������o *\n�����F��!!!\n");
				}
				printf("\n\n-�����N��^�D���-\n");

				char end4;
				end4 = _getch();
				while (end4 != 0)
				{
					system("cls");
					break;
				}	
			}
			else if (back4 == 27)
			{
				break;
            }
			
			
			break;






		case '5':
			printf("\n\nByeBye!!!\n\n");
			printf("�Ы����N���~��...\n");

			char surprise;
			surprise = _getch();

			if (surprise = !0)
			{
				system("cls");
				printf("\n             *       \n");
				printf("            / \\\n");
				printf("           /   \\\n");
				printf("          /     \\\n ");
				printf("       ___     ___\n");
				printf("         /       \\\n");
				printf("        /         \\\n");
				printf("    _____         _____\n");
				printf("       /           \\\n");
				printf("      /             \\\n");
				printf("      ---------------\n");
				printf("            |  |\n");
				printf("             --\n\n");
				printf("Merry Christmas!!!\n\n");
				end = 1;
			}
			
			break;


		default:
			system("cls");
		}

	}

	system("pause");
	return 0;
}


	
