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
		//遊戲主選單
		system("cls");
		printf("\n\n  						 迷宮遊戲 \n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		printf("                                               選擇關卡等級\n\n\n");
		printf("						入門     1\n\n");
		printf("						普通     2\n\n");
		printf("						困難     3\n\n");
		printf("						大師     4\n\n");
		printf("						結束遊戲 5\n\n");

		char k; //選擇關卡參數
		scanf_s("%c", &k);
		system("cls");

		switch (k)
		{
		//入門 1
		case '1':
			//關卡說明
			printf("將o走到出口即成功過關\n小提示：走越少步能獲得越多*喔!\n\n");
			printf("\n開始挑戰：Enter     回到主選單：Esc\n");

			char back1;
			back1 = _getch();

			if (back1 == 13) //遊戲開始
			{
				system("cls");

				//繪製迷宮
				char a[100][100] = { "######",
									"#o #  ",
									"# ## #",
									"#  # #",
									"##   #",
									"######" }; 
				int i, x = 1, y = 1; //起始位置
				for (i = 0; i < 6; i++)
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n\n");

				char ch; //鍵盤文字
				int count = 0; //計算使用步數

				//x:橫線 y:直線
				while (x != 1 || y != 5) //判斷是否為出口 a[1][5]，在未達出口前持續進行
				{
					ch = _getch(); //讀取輸入文字
					//下移
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //判斷下一個位置是否撞牆
						{
							a[x][y] = ' '; //原位置變空白
							x++;
							a[x][y] = 'o'; //新位置變 o
							count++; //多走一步
						}
					}
					//上移
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
					//左移
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
					//右移
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
					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					//印出移動後的矩陣
					for (i = 0; i < 6; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n");
				}
				printf("\n成功過關!!!\n你一共走了%d步\n\n", count);

				//星等評分(1-3顆星)
				if (count <= 11)
				{
					printf("恭喜獲得 * * *\n太強了吧!!!\n");
				}
				else if (count > 11 && count <= 13)
				{
					printf("恭喜獲得 * *\n不錯不錯!!!");
				}
				else
				{
					printf("恭喜獲得 *\n可以更好!!!\n");
				}
				printf("\n\n-按任意鍵回主選單-\n");

				//按任意鍵回到主選單(除了adsw)
				char end1;
				end1 = _getch();
				if (end1!=0)
				{
					break;
				}
			}
			else if (back1 == 27)
			{
				system("cls");
			}

			break;
			
			

			
		case '2':
			printf("是時候展現真正的技術了!\n小提示：走越少步能獲得越多*喔!\n\n");
			printf("\n開始挑戰：Enter     回到主選單：Esc\n");

			char back2;
			back2 = _getch();

			if (back2 == 13)
			{
				system("cls");
				//繪製迷宮
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
									 "####################", }; //迷宮出口位置座標 a[17][19]
				int i, x = 1, y = 1;
				for (i = 0; i <20 ; i++) //i<20 取決於20*20的矩陣
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n\n");

				char ch; //鍵盤文字
				int count = 0; //計算使用步數

				//x:橫線 y:直線
				while (x != 17 || y != 19) //判斷是否為出口，在未達出口前持續進行
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //判斷下一個位置是否撞牆
						{
							a[x][y] = ' '; //原位置變空白
							x++;
							a[x][y] = 'o'; //新位置變o
							count++; //多走一步
						}
					}
					//上移
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
					//左移
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
					//右移
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


					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n");

				}
				printf("\n成功過關!!!\n你一共走了%d步\n\n", count);

				if (count <= 60)
				{
					printf("恭喜獲得 * * *\n太強了吧!!!\n");
				}
				else if (count > 60 && count <= 70)
				{
					printf("恭喜獲得 * *\n不錯不錯!!!");
				}
				else
				{
					printf("恭喜獲得 *\n可以更好!!!\n");
				}
				printf("\n\n-按任意鍵回主選單-\n");

				char end2;
				end2 = _getch();
				if (end2 != 0)
				{
					break;
				}
			}
			else if (back2 == 27)
			{
				system("cls");
				break;
			}

			break;

		



		case '3':
			printf("你以為能到達終點的路不一定是真的路，往往置之死地而後生，偷偷告訴你，在迷宮中有神奇的傳送門!\n想要一步登天，去牆角蹲吧!!!\n");
			printf("小提示：走越少步能獲得越多*喔!\n切記!!!絕對不要小看了傳送門的威力\n");
			printf("\n開始挑戰：Enter     回到主選單：Esc\n");

			char back3;
			back3 = _getch();

			if (back3 == 13)
			{
				system("cls");
				//繪製迷宮
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
									 "####################", }; //迷宮出口位置座標 a[17][19]
				int i, x = 1, y = 1;
				for (i = 0; i < 20; i++) //i<20 取決於20*20的矩陣
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n\n");

				char ch; //鍵盤文字
				int count = 0; //計算使用步數

				//x:橫線 y:直線
				while (x != 17 || y != 19) //判斷是否為出口，在未達出口前持續進行
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (a[x + 1][y] != '#') //判斷下一個位置是否撞牆
						{
							a[x][y] = ' '; //原位置變空白
							x++;
							a[x][y] = 'o'; //新位置變o
							count++; //多走一步
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
					//上移
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
								//踩到陷阱 a[17][17]，回到原點
								a[x][y] = ' ';
								a[1][1] = 'o';
								x = 1;
								y = 1;
								printf("這不是通往出口的路喔!試試看往死路走!\n傳送門可能會幫助你~");
								Sleep(6000);
							}
							else if ((x == 5 && y == 18)||(x==17&&y==11))
							{
								//踩到傳送門 ，飛到出口前
								a[x][y] = ' ';
								a[17][18] = 'o';
								x = 17;
								y = 18;
							}
							else if (x == 3 && y == 12)
							{
								//踩到傳送門 
								a[x][y] = ' ';
								a[1][16] = 'o';
								x = 1;
								y = 16;
							}
						}
					}
					//左移
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
					//右移
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
								//踩到傳送門 a[13][16]，飛到出口前
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
					
					

					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n");

				}
				printf("\n成功過關!!!\n你一共走了%d步\n\n", count);

				if (count <= 40)
				{
					printf("恭喜獲得 * * *\n太強了吧!!!\n");
				}
				else if (count > 40 && count <= 60)
				{
					printf("恭喜獲得 * *\n不錯不錯!!!");
				}
				else
				{
					printf("恭喜獲得 *\n可以更好!!!\n");
				}
				printf("\n\n-按任意鍵回主選單-\n");

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
			printf("這是一個殘酷的世界，必須在時間內破解所有密碼，並撥打求救電話，才能離開迷宮，事不宜遲，出發吧!\n"
				"小提示：越快到達能獲得越多*喔!\n\n密碼破解順序 7->8->2\n注意地圖中符號與數字的相對位置!!!\n");
			printf("\n開始挑戰：Enter     回到主選單：Esc\n");

			char back4;
			back4 = _getch();

			if (back4 == 13)
			{
				time_t ts, te;
				int timer;

				ts = time(NULL);//計時開始
				
				char ch; //鍵盤文字
				int count = 0; //計算使用步數
				int i;

				system("cls");
				//繪製迷宮
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
									 "*#######0###########"}; //迷宮出口位置座標 a[17][19]
				int x1 = 1, y1 = 1;
				for (i = 0; i < 20; i++) //i<20 取決於20*20的矩陣
				{
					puts(a[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 7\n");

				

				//x:橫線 y:直線
				while (x1 != 14 || y1 !=3) //寶物位置
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (a[x1 + 1][y1] != '#') //判斷下一個位置是否撞牆
						{
							a[x1][y1] = ' '; //原位置變空白
							x1++;
							a[x1][y1] = 'o'; //新位置變o
							count++; //多走一步
						}
					}
					//上移
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
					//左移
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
					//右移
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
								printf("還沒破解密碼，無法離開迷宮!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(a[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 7\n");
				}
				Sleep(2000);
				system("cls");
				printf("破解密碼 7");
				Sleep(3000);

				system("cls");
				//繪製迷宮
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
									 "*#######0###########"}; //迷宮出口位置座標 a[17][19]
				int x2 = 14, y2 = 3;
				for (i = 0; i < 20; i++) //i<20 取決於20*20的矩陣
				{
					puts(b[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 8\n");

				while (x2 != 14 || y2 != 7) //寶物位置
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (b[x2 + 1][y2] != '#') //判斷下一個位置是否撞牆
						{
							b[x2][y2] = ' '; //原位置變空白
							x2++;
							b[x2][y2] = 'o'; //新位置變o
							count++; //多走一步
							b[14][3] = '7';
						}
					}
					//上移
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
					//左移
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
					//右移
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
								printf("還沒破解密碼，無法離開迷宮!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(b[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 8\n");
				}
				Sleep(2000);
				system("cls");
				printf("破解密碼 8");
				Sleep(3000);

				system("cls");
				//繪製迷宮
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
									 "*#######0###########" }; //迷宮出口位置座標 a[17][19]
				int x3 = 14, y3 = 7;
				for (i = 0; i < 20; i++) //i<20 取決於20*20的矩陣
				{
					puts (c[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 2\n");

				while (x3 != 1 || y3 != 10) //寶物位置
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (c[x3 + 1][y3] != '#') //判斷下一個位置是否撞牆
						{
							c[x3][y3] = ' '; //原位置變空白
							x3++;
							c[x3][y3] = 'o'; //新位置變Q
							count++; //多走一步
							c[14][7] = '8';
						}
					}
					//上移
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
					//左移
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
					//右移
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
								printf("還沒破解密碼，無法離開迷宮!");
								Sleep(5000);
							}
						}
					}

					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(c[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n\n目標：破解密碼 2\n");
				}
				Sleep(2000);

				
				system("cls");
				printf("破解密碼 2");
				Sleep(2000);
				system("cls");
				printf("\n成功破解所有密碼\n");
				printf("-------------------\n");
				printf("|   7    8    2   |\n");
				printf("-------------------\n\n");
				printf("從o變成偉大的尋寶家@\n");
				printf("朝終點狂奔吧!!!");
				Sleep(3000);

				system("cls");
				//繪製迷宮
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
									 "*#######0###########" }; //迷宮出口位置座標 a[17][19]
				int x4 = 1, y4 = 10;
				for (i = 0; i < 20; i++) //i<20 取決於20*20的矩陣
				{
					puts(d[i]); //printf
				}
				printf("\n\n\n***使用adsw控制上下左右移動***\n\n\n");
				
				while (x4 != 17 || y4 != 19) //出口位置
				{
					ch = _getch(); //輸入文字
					//下移
					if (ch == 's')
					{
						if (d[x4 + 1][y4] != '#') //判斷下一個位置是否撞牆
						{
							d[x4][y4] = ' '; //原位置變空白
							x4++;
							d[x4][y4] = '@'; //新位置變Q
							d[1][10] = '2';
						}
					}
					//上移
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
					//左移
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
					//右移
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

					system("cls"); //把已輸出文字清掉，游標回到第一行最前面的位置

					for (i = 0; i < 20; i++)
					{
						puts(d[i]);
					}
					printf("\n\n\n***使用adsw控制上下左右移動***\n");
				}

				te = time(NULL);//計時結束

				timer = te - ts;//所花的時間

				
				system("cls");
				printf("成功過關");
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
					printf("失敗!\n啊啊啊! 超過時間!@@\n芭比q了QQ 再挑戰一次吧!");
				}
				else if (timer <= 60)
				{
					printf("絕對是外掛嫌疑犯= =");
				}
				else if (timer>60&&timer <= 180)
				{
					printf("恭喜獲得 * * *\n接近神的境界!!!\n");
				}
				else if (timer > 180 && timer < 240)
				{
					printf("成功過關!\n恭喜獲得 * *\n很厲害ㄟ!!!\n");
				}
				else
				{
					printf("成功過關!\n恭喜獲得 *\n不錯了啦!!!\n");
				}
				printf("\n\n-按任意鍵回主選單-\n");

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
			printf("請按任意鍵繼續...\n");

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


	