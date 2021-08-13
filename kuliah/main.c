#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	srand((unsigned int)time(NULL));
	soal4();
	return 0;
}
void soal1_1() {
	int arr[100] = { 0 };
	int range,max,min,range2,max2,min2,i, x, pos, n = 20;

	// initial array of size 10
	for (i = 0; i < 20; i++)
		arr[i] = i + 1;

	printf("\n");
	printf("\nElement Non-Random : ");
	// print the original array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// element to be inserted
//    x = 50;

	// position at which element
	// is to be inserted
	pos = 1;

	// increase the size by 1
//    n++;
	min=max=arr[0];
	for(i=1; i<n; i++) {
		/* If current element is greater than max */
		if(arr[i] > max) {
			max = arr[i];
		}

		/* If current element is smaller than min */
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	range = max - min;
	/* Print maximum and minimum element */
	printf("Maximum element sebelum ditambah = %d\n", max);
	printf("Minimum element sebelum ditambah = %d\n", min);
	printf("Range element sebelum ditambah = %d\n", range);
	printf("Masukkan Angka: ");
	scanf("%d", &x);
	// shift elements forward
	for (i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	min2=max2=arr[0];
	// print the updated array
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(i=1; i<n; i++) {
		/* If current element is greater than max */
		if(arr[i] > max2) {
			max2 = arr[i];
		}

		/* If current element is smaller than min */
		if(arr[i] < min2) {
			min2 = arr[i];
		}
	}
	range2 = max2 - min2;
	/* Print maximum and minimum element */
	printf("Maximum element sesudah ditambah = %d\n", max2);
	printf("Minimum element sesudah ditambah = %d\n", min2);
	printf("Range element sesudah ditambah = %d\n", range2);


}
void soal1() {

	int sz = 20;
	int randArray[sz],i,max,min,range,databaru;
	srand((unsigned int)time(NULL));
	for(i=0; i<20; i++)
		randArray[i]=rand()%100;
	//Generate number between 0 to 99
	printf("::Elements of the array::\n");


	for(i=1; i<sz; i++) {
		/* If current element is greater than max */
		if(randArray[i] > max) {
			max = randArray[i];
		}

		/* If current element is smaller than min */
		if(randArray[i] < min) {
			min = randArray[i];
		}
	}

	range = max - min;
	/* Print maximum and minimum element */
	printf("Maximum element = %d\n", max);
	printf("Minimum element = %d\n", min);
	printf("Range element = %d\n", range);


	printf("Element Random : ");
	for(i=0; i<sz; i++) {
		printf("%d,",randArray[i]);
	}

	soal1_1();
}
void soal2() {
	char nama[50];
	printf("Masukkan Nama: ");
	scanf("%[^\n]s", &nama);
	printf("Nama yang diinputkan: %s\n", nama);
	printf("Nama yang diinputkan lalu dibalik: %s\n", strrev(nama));
	printf("total huruf yang diinput: %d\n", strlen(nama));
}

void soal3() {
// Struct digunakan untuk wadah data peserta pelari

struct pelari

//data peserta lari yang perlu diisi

{

    char nama[25];

    int no;
    
    int usia;

    int jam;

    int menit;

    int detik;

    int total;

}

//untuk menentukan peserta yang mengikuti lomba, maka cantumkan jumlah peserta dengan variabel peserta[4], Swap;

//sedangkan untuk melakukan sorting, bisa menggunakan variabel swap (mengganti)

peserta[4],swap;

//proses looping (mengulang memasukkan data peserta lomba)

    int i;

    int hasil;

//untuk menentukan proser sorting, dibutuhkan variabel berikut

    int a,b;

    for(i=0; i<2; i++)

    {
		printf("===Peserta===\n");
        printf("No = ");

        scanf("%d",&peserta[i].no);

        printf("Nama = ");

        scanf("%s",&peserta[i].nama);
		
		printf("Umur = ");

        scanf("%d",&peserta[i].usia);
//memakai %s karena menggunakan variabel char, sedangkan titik <.> untuk memanggil data di struck
		
		printf("Jam = ");

        scanf("%d",& peserta [i].jam);
        

        printf("Menit = ");

        scanf("%d",& peserta [i].menit);

        printf("Detik = ");

        scanf("%d",& peserta [i].detik);
        printf("\n");

//konvensikan hasil total pelari

        peserta [i].total= peserta [i].jam*3600+ peserta [i].menit*60+ peserta [i].detik;

    }

//Proses sorting menggunakan buble sort

    for(a=0; a<2; a++) //sebagai peserta pertama

    {

        for(b=0; b<2; b++) //sebagai peseta berikutnya

        {

            if (peserta [b].total> peserta [b+1].total)

            {

                swap= peserta [b];

                peserta [b]= peserta [b+1];

                peserta [b+1]=swap;

            }

        }

    }

//Untuk Menampilkan Hasil

    for(hasil=1; hasil<2; hasil++)

    {

        printf("\n\n===Pelari Tercepat===\nNo   : %d\nNama : %s\nUsia : %d\nJam : %d\nMenit: %d\nDetik: %d\nTotal: %d\n\n\n\n" ,peserta[hasil].no ,peserta [hasil].nama ,peserta [hasil].usia ,peserta [hasil].jam ,peserta [hasil].menit ,peserta[hasil].detik ,peserta [hasil].total);

    }

    return 0;


}

// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    printf("%d ", node->data);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    printf("%d ", node->data);
 
    /* then recur on left sutree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}
 
/* Driver program to test above functions*/
int soal4()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    printf("\nPre-Order traversal of binary tree (Left, Root, Right) is \n");
    printPreorder(root);
 
    printf("\nIn-Order traversal of binary tree (Root, Left, Right) is \n");
    printInorder(root);
 
    printf("\nPost-Order traversal of binary tree (Left, Right, Root) is \n");
    printPostorder(root);
 
    getchar();
    return 0;
}

 
