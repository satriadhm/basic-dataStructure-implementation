#include "tree.h"

/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x
dan left dan right adalah NULL */
adrNode newNode(infotype x)
{
    adrNode newnode;
    newnode = new node;
    newnode->info = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
};
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL
apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
adrNode findNode(adrNode root, infotype x)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->info == x)
    {
        return root;
    }
    else
    {
        adrNode leftResult = findNode(root->left, x);
        if (leftResult != NULL)
        {
            return leftResult;
        }

        adrNode rightResult = findNode(root->right, x);
        if (rightResult != NULL)
        {
            return rightResult;
        }
    }
};


/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi
alamat node yang mau ditambahkan pada BST
 F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST
Catatan: implementasikan secara REKURSIF */
void insertNode(adrNode &root, adrNode p)
{
    if (root == NULL)
    {
        root = p;
    }else if (p->info < root->info)
    {
        insertNode(root->left,p);
    }else
    {
        insertNode(root->right,p);
    }
};

/* I.S. terdefinisi root dari BST (mungkin NULL)
 F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left
dan right
Catatan: implementasikan secara REKURSIF */
void printPreOrder(adrNode root)
{
    if (root != NULL)
    {
        cout << root->info << " ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x
 F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
Catatan: implementasikan secara REKURSIF */
void printDescendant(adrNode root, infotype x)
{
    if (root != NULL)
    {
        if(root->info == x)
        {
            printDescendant(root->left,x);
            printDescendant(root->right,x);
            printPreOrder(root->left);
            printPreOrder(root->right);
        } else
        {

            printDescendant(root->left,x);
            printDescendant(root->right,x);
        }
    }
};

/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST
Catatan: implementasikan secara REKURSIF */
int sumNode(adrNode root)
{
    if (root == NULL)
    {
        return 0;
    }else
    {
        return root->info + sumNode(root->left) + sumNode(root->right);
    }
};

/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST
Catatan: implementasikan secara REKURSIF */

int countLeaves(adrNode root)
{
    if (root == NULL)
    {
        return 0;
    }else if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }else
    {
        return countLeaves(root->left) + countLeaves(root->right);
    }

};

/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh.
Catatan: implementasikan secara REKURSIF */
int heightTree(adrNode root)
{
    if (root == NULL)
    {
        return 0;
    }else
    {
        int leftHeight = heightTree(root->left);
        int rightHeight = heightTree(root->right);

        if (leftHeight > rightHeight)
        {
            return leftHeight+ 1;
        }else
        {
            return rightHeight+ 1;
        }
    }
};

