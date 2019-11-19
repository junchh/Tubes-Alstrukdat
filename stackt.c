//Name File:    stackt.C
//Tanggal:      25 oktober 2019
//Deskripsi:    Implementasi stack yang diimplementasi dengan tabel kontigu dan ukuran sama
//              TOP adalah alamat elemen puncak
//              Implementasi dalam bahasa C dengan alokasi statik
//Tubes Alstrukdat

/* File : stackt.h */
/* deklarasi stack yang diimplementasi dengan tabel kontigu dan ukuran sama */
/* TOP adalah alamat elemen puncak */
/* Implementasi dalam bahasa C dengan alokasi statik */
#include "stackt.h"
#include <stdlib.h>
#include <stdio.h>


/* ************ Prototype ************ */
/* *** Konstruktor/Kreator *** */
void CreateEmpty_Stackt (Stack *S)
/* I.S. sembarang; */
/* F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl */
/* jadi indeksnya antara 1.. MaxEl+1 karena 0 tidak dipakai */
/* Ciri stack kosong : TOP bernilai Nil */
{
  Top(*S) = Nil;
}

/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsEmpty_Stackt (Stack S)
/* Mengirim true jika Stack kosong: lihat definisi di atas */
{
  return (Top(S) == Nil);
}
boolean IsFull_Stackt (Stack S)
/* Mengirim true jika tabel penampung nilai elemen stack penuh */
{
  return (Top(S) == MaxElS);
}

/* ************ Menambahkan sebuah elemen ke Stack ************ */
void Push (Stack * S, infotype X)
/* Menambahkan X sebagai elemen Stack S. */
/* I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh */
/* F.S. X menjadi TOP yang baru,TOP bertambah 1 */
{
  Top(*S) +=1;
  InfoTop(*S) = X;
}

/* ************ Menghapus sebuah elemen Stack ************ */
void Pop (Stack * S, infotype* X)
/* Menghapus X dari Stack S. */
/* I.S. S  tidak mungkin kosong */
/* F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */
{
  *X = InfoTop(*S);
  Top(*S) -= 1;
}