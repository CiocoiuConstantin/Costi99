#include<iostream>
#include<fstream>

 ifstream fin("input.dat");
using namespace std;
int H[100];
int i=0;
char *text;
int lenght=5;
char C[37];
int V[37];
int read_data()
{
    char j;
    int k;
    while(!fin.eof())
    {
        fin>>j;
        if(j!=' ')
        {
            int ct=0;
            for(k=1;k<=i;k++)
                if(j==c[k])
                {
                    ct=1;
                    break;
                }
            if(ct==0)
            {
                i++;
                c[i]=j;
                v[i]++;
            }
            if(ct==1)
            {
                v[k]++;
            }
        }
    }

}

int compute_data()
{
lenght=5;

}


int print_compute()
{

}

int print_data()
{

}
int print_heap()
{

}
int RSD_heap(int nume_nod,int heap_size)
{
    if (nume_nod<=heap_size)
    {
       cout<<H[nume_nod]<<" ";
       RSD_heap(nume_nod*2,heap_size);
       RSD_heap(nume_nod*2+1,heap_size);
       char heap[1000];
    }
}
int main()
{
read_data();
compute_data();
print_data();
RSD_heap();
print_heap();
}
