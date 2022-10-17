#include <iostream>
#include <stdlib.h>
using namespace std;

class Graph
{
private:
    int row, col, i, j, dem, dinh;
    string chon;
    char arr[300];
public:
    void VoHuong();
    void CoHuong();
};

void Graph::VoHuong()
{
    FILE *fp;
    fp = fopen("input.txt", "r");
    row = 6;
    col = 6;
    int matran[6][6];
    fgets(arr, 300, fp);
    cout << arr << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            fscanf(fp, "%d ", &matran[i][j]); 
        }
        fscanf(fp, "\n");
    }
    do
    {
         system("cls");
        int c;
        cout << endl;
        cout << "-=-=-=-=-=- Bieu dien Do Thi VO HUONG -=-=-=-=-=-" << endl;
        cout << "1. Ma tran ke " << endl;
        cout << "2. Danh sach canh" << endl;
        cout << "3. Danh sach ke" << endl;
        cout << "4. Bac cua dinh" << endl;
        cout << "Chon: ";
        cin >> c;
        switch (c)
        {
        case 1:
             system("cls");
            cout << "-=-=-=-=-=- Ma tran ke -=-=-=-=-=-" << endl;
            cout << endl; 
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    cout << matran[i][j] << " ";
                }
                cout << endl;
            }
            dem = 0;
            for (i = 0; i < row; i++)
            {
                for (j = i; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        dem++;
                    }
                }
            }
            cout << endl
                 << "Do thi co: " << dem << " canh" << endl;
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 2:
             system("cls");
            cout << "-=-=-=-=-=- Danh sach canh -=-=-=-=-=-" << endl;
            cout << endl;
            cout << "Dau  Cuoi" << endl;
            for (i = 0; i < row; i++)
            {
                for (j = i; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        printf(" %d    %d\n", i + 1, j + 1);
                    }
                }
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 3:
             system("cls");
            cout << "-=-=-=-=-=- Danh sach ke -=-=-=-=-=-" << endl;  
            cout << endl;
            for (i = 0; i < row; i++)
            {
                printf("%d | ", (i + 1));
                for (j = 0; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        printf("%d ", j + 1);
                    }
                }
                printf("\n");
            }
            cout << endl
                 << "Dinh ke cua dinh : ";
            cin >> dinh;
            if (dinh > 0 && dinh <= 6)
            {
                printf("%d | ", dinh);
                for (j = 0; j < col; j++)
                {
                    if (matran[dinh - 1][j] == 1)
                    {
                        printf("%d ", j + 1);
                    }
                }
            }
            else
            {
                cout << "!!! Khong co dinh nay !!!" << endl;
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 4:
             system("cls");
            cout << "-=-=-=-=-=- Bac cua dinh -=-=-=-=-=-" << endl;
            cout << endl;
            cout << "Bac cua dinh: ";
            cin >> dinh;
            if (dinh > 0 && dinh <= 6)
            {
                dem = 0;
                for (j = 0; j < col; j++)
                {
                    if (matran[dinh - 1][j] == 1)
                    {
                        dem++;
                    }
                }
                printf("DEG(%d) = %d\n", dinh, dem);
            }
            else
            {
                cout << "!!! Khong co dinh nay !!!" << endl;
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        default:
             system("cls");
            cout << "!!! ______FAIL______ !!!" << endl;
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        }
    } while (chon == "y");
    fclose(fp);
}

void Graph::CoHuong()
{
    FILE *fp;
    fp = fopen("input1.txt", "r");
    row = 5;
    col = 5;
    int matran[5][5];
    fgets(arr, 300, fp);
    cout << arr << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            fscanf(fp, "%d ", &matran[i][j]);
        }
        fscanf(fp, "\n");
    }
    do
    {
         system("cls");
        int c;
        cout << endl;
        cout << "-=-=-=-=-=- Bieu dien Do Thi CO HUONG -=-=-=-=-=-" << endl;  
        cout << "1. Ma tran ke " << endl;
        cout << "2. Danh sach cung" << endl;
        cout << "3. Danh sach ke" << endl;
        cout << "4. Ban bac ra, vao cua dinh" << endl;
        cout << "Chon: ";
        cin >> c;
        switch (c)
        {
        case 1:
             system("cls");
            cout << "-=-=-=-=-=- Ma tran ke -=-=-=-=-=-" << endl;
            cout << endl;  
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    cout << matran[i][j] << " ";
                }
                cout << endl;
            }
            dem = 0;
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        dem++;
                    }
                }
            }
            cout << endl
                 << "Do thi co: " << dem << " canh" << endl;
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 2:
             system("cls");
            cout << "-=-=-=-=-=- Danh sach cung -=-=-=-=-=-" << endl;
            cout << endl;
            cout << "Dau  Cuoi" << endl;
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        printf(" %d    %d\n", i + 1, j + 1);
                    }
                }
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 3:
             system("cls");
            cout << "-=-=-=-=-=- Danh sach ke -=-=-=-=-=-" << endl;
            cout << endl;
            for (i = 0; i < row; i++)
            {
                printf("%d | ", (i + 1));
                for (j = 0; j < col; j++)
                {
                    if (matran[i][j] == 1)
                    {
                        printf("%d ", j + 1);
                    }
                }
                printf("\n");
            }
            cout << endl
                 << "Dinh ke cua dinh : ";
            cin >> dinh;
            if (dinh > 0 && dinh <= 5)
            {
                printf("%d | ", dinh);
                for (j = 0; j < col; j++)
                {
                    if (matran[dinh - 1][j] == 1)
                    {
                        printf("%d ", j + 1);
                    }
                }
            }
            else
            {
                cout << "!!! Khong co dinh nay !!!" << endl;
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        case 4:
             system("cls");
            cout << "-=-=-=-=-=- Ban bac ra, vao cua dinh -=-=-=-=-=-" << endl;
            cout << endl;  
            cout << "Bac cua dinh: ";
            cin >> dinh;
            if (dinh > 0 && dinh <= 5)
            {
                dem = 0;
                printf("\n====> Ban bac ra cua dinh: \n");
                dem = 0;
                for (j = 0; j < col; j++)
                {
                    if (matran[dinh - 1][j] == 1)
                    {
                        dem++;
                    }
                }
                printf("DEG + (%d) = %d\n", dinh, dem);
                dem = 0;
                printf("\n====> Ban bac vao cua dinh: \n");
                for (j = 0; j < col; j++)
                {
                    if (matran[j][dinh - 1] == 1)
                    {
                        dem++;
                    }
                }
                printf("DEG - (%d) = %d\n", dinh, dem);
            }
            else
            {
                cout << "!!! Khong co dinh nay !!!" << endl;
            }
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
             
        default:
             system("cls");
            cout << "!!! ______FAIL______ !!!" << endl;
            cout << endl
                 << "Ban co muon quay lai khong ? - y or n -  ";
            cin >> chon;
            break;
        }
    } while (chon == "y");
    fclose(fp);
}

int main()
{
    int a;
    string chon;
    Graph doThi;
    do
    {
         system("cls");
        cout << "_____ CHON DO THI _____" << endl;
        cout << "1. Do Thi Vo Huong      (doc file input)" << endl;
        cout << "2. Do Thi Co Huong      (doc file input1)" << endl;
        cout << "chon: ";
        cin >> a;
        switch (a)
        {
        case 1:
             system("cls");
            doThi.VoHuong();
            cout << endl
                 << "Ve CHON DO THI ? - y or n -  ";
            cin >> chon;  
            break;
        case 2:
             system("cls");
            doThi.CoHuong();
            cout << endl
                 << "Ve CHON DO THI ? - y or n -  ";
            cin >> chon;
        default:
             system("cls");
            cout << "!!! ______FAIL______ !!!" << endl;
            cout << endl
                 << "Tiep tuc ? - y or n -  ";
            cin >> chon;
            break;
        }

    } while (chon == "y");
}