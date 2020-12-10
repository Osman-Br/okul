#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//-VERİ TIPLERI-
struct e {   //et turu urunleri tutmamizi saglayan veri tipi
    char urun_adi[20];
    float fiyat;
    char kategori;
    char paketleme_tarihi[10];
    char son_kullanma_tarihi[10];
    struct e *sonraki;
};
struct t {  //tarim turu urunleri tutmamizi saglayan veri tipi
    char urun_adi[20];
    float fiyat;
    char kategori;
    char alinma_tarihi[10];
    struct t *sonraki;
};
struct s {  //sut urunlerini tutmamizi saglayan veri tipi
    char urun_adi[20];
    float fiyat;
    char son_kullanma_tarihi[10];
    struct s *sonraki;
};
struct k {  //konserve urunleri tutmamizi saglayan veri tipi
    char urun_adi[20];
    float fiyat;
    char son_kullanma_tarihi[10];
    int reyon_numarasi;
    char reyon_tarafi;
    struct k *sonraki;
};
struct g {  //gida disi urunleri tutmamizi saglayan veri tipi
    char urun_adi[20];
    float fiyat;
    char kategori;
    int reyon_numarasi;
    char reyon_tarafi;
    struct g *sonraki;
};

//----------------YARDIMCI FONKSIYONLAR-------------------
struct e* et_ekle(struct e *etler) {  //et urunlerini kaydeden fonksiyon
    if (etler->fiyat == 0) {  //bagli listede ilk elemanin atanip atanmadigini kontrol ediyor

        printf("\nUrun adini giriniz:");
        scanf("%s", etler->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &etler->fiyat);

        printf("\nEt turunu giriniz(R,B,P):");
        scanf(" %c", &etler->kategori);

        printf("\nPaketleme tarihini giriniz(#-#-#):");
        scanf("%s", etler->paketleme_tarihi);

        printf("\nSon tuketim tarihini giriniz(#-#-#):");
        scanf("%s", etler->son_kullanma_tarihi);

        return etler;
    } else {
        struct e *son = etler;
        while (son->sonraki != NULL) {
            son = son->sonraki;
        }
        struct e *et = (struct e *) malloc(sizeof(struct e *));
        son->sonraki = et;
        et->sonraki = NULL;

        printf("\nUrun adini giriniz:");
        scanf("%s", et->urun_adi);
        printf("\nUrun fiyatini giriniz:");
        scanf(" %f", &et->fiyat);
        printf("\nEt turunu giriniz(R,B,P):");
        scanf(" %c", &et->kategori);
        printf("\nPaketleme tarihini giriniz(#-#-#):");
        scanf("%s", et->paketleme_tarihi);
        printf("\nSon tuketim tarihini giriniz(#-#-#):");
        scanf("%s", et->son_kullanma_tarihi);

        return et;
    }
}
struct t* meyve_sebze_ekle(struct t* urunler) {  //tarim urunlerini kaydeden fonksiyon
    if (urunler->fiyat == 0) {  //bagli listede ilk elemanin atanip atanmadigini kontrol ediyor
        printf("\nUrun adini giriniz:");
        scanf("%s", urunler->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urunler->fiyat);

        printf("\nTarim turunu giriniz(M,S):");
        scanf(" %c", &urunler->kategori);

        printf("\nAlinma tarihini giriniz(#-#-#):");
        scanf("%s", urunler->alinma_tarihi);

        return urunler;
    } else {
        struct t *son = urunler;
        while (son->sonraki != NULL) {
            son = son->sonraki;
        }
        struct t *urun = (struct t *) malloc(sizeof(struct t *));
        son->sonraki = urun;
        urun->sonraki = NULL;

        printf("\nUrun adini giriniz:");
        scanf("%s", urun->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urun->fiyat);

        printf("\nTarim turunu giriniz(M,S)");
        scanf(" %c", &urun->kategori);

        printf("\nAlinma tarihini giriniz(#-#-#):");
        scanf("%s", urun->alinma_tarihi);

        return urun;
    }

}
struct s* sut_urunu_ekle(struct s* urunler){  //sut urunlerini kaydeden fonksiyon
    if(urunler->fiyat == 0){  //bagli listede ilk elemanin atanip atanmadigini kontrol ediyor

        printf("\nUrun adini giriniz:");
        scanf("%s", urunler->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urunler->fiyat);

        printf("\nSon kullanma tarihini giriniz(#-#-#):");
        scanf("%s", urunler->son_kullanma_tarihi);

        return urunler;
    }else{
        struct s *son = urunler;
        while (son->sonraki != NULL) {
            son = son->sonraki;
        }
        struct s* urun = (struct s*)malloc(sizeof(struct s*));
        son->sonraki = urun;
        urun->sonraki = NULL;

        printf("\nUrun adini giriniz:");
        scanf("%s", urun->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urun->fiyat);

        printf("\nSon kullanma tarihini giriniz(#-#-#):");
        scanf("%s", urun->son_kullanma_tarihi);

        return urun;
    }
}
struct k* konserve_ekle(struct k* urunler){  //konserve urunlerini kaydeden fonksiyon
    if(urunler->fiyat == 0){  //bagli listede ilk elemanin atanip atanmadigini kontrol ediyor

        printf("\nUrun adini giriniz:");
        scanf("%s", urunler->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urunler->fiyat);

        printf("\nSon kullanma tarihini giriniz(#-#-#):");
        scanf("%s", urunler->son_kullanma_tarihi);

        printf("\nReyon numarasini giriniz:");
        scanf("%d",&urunler->reyon_numarasi);

        printf("\nReyon tarafini giriniz(A,B):");
        scanf("%s",&urunler->reyon_tarafi);

        return urunler;
    }else{
        struct k *son = urunler;
        while (son->sonraki != NULL) {
            son = son->sonraki;
        }
        struct k* urun = (struct t*)malloc(sizeof(struct k*));
        son->sonraki = urun;
        urun->sonraki = NULL;

        printf("\nUrun adini giriniz:");
        scanf("%s", urun->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urun->fiyat);

        printf("\nSon kullanma tarihini giriniz(#-#-#):");
        scanf("%s", urun->son_kullanma_tarihi);

        printf("\nReyon numarasini giriniz:");
        scanf("%d",&urun->reyon_numarasi);

        printf("\nReyon tarafini giriniz(A,B):");
        scanf("%s",&urun->reyon_tarafi);

        return urun;
    }
}
struct g* gida_Disi_ekle(struct g* urunler){  //gida disi urunleri kaydeden fonksiyon
    if(urunler->fiyat == 0){  //bagli listede ilk elemanin atanip atanmadigini kontrol ediyor

        printf("\nUrun adini giriniz:");
        scanf("%s", urunler->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urunler->fiyat);

        printf("\nUrun turunu giriniz(C,P,D):");
        scanf("%s",&urunler->kategori);

        printf("\nReyon numarasini giriniz:");
        scanf("%d",&urunler->reyon_numarasi);

        printf("\nReyon tarafini giriniz(A,B):");
        scanf("%s",&urunler->reyon_tarafi);

        return urunler;
    }else{
        struct g *son = urunler;
        while (son->sonraki != NULL) {
            son = son->sonraki;
        }
        struct g* urun = (struct g*)malloc(sizeof(struct g*));
        son->sonraki = urun;
        urun->sonraki = NULL;

        printf("\nUrun adini giriniz:");
        scanf("%s", urun->urun_adi);

        printf("\nUrun fiyatini giriniz:");
        scanf("%f", &urun->fiyat);

        printf("\nUrun turunu giriniz(C,P,D):");
        scanf("%s",&urun->kategori);

        printf("\nReyon numarasini giriniz:");
        scanf("%d",&urun->reyon_numarasi);

        printf("\nReyon tarafini giriniz(A,B):");
        scanf("%s",&urun->reyon_tarafi);

        return urun;
    }
}

//--------------------------------------------------ASIL FONKSIYONLAR-------------------------------------------------------
void urun_kaydet(struct e* et, struct t* tarim_Urunleri, struct s* sut_Urunleri, struct k* konserveler, struct g* gidaDisi){  //urunleri kaydeden fonksiyon
    printf("Urun kategorisini seciniz(E,T,S,K,G) : ");
    char kategori;
    scanf(" %c",&kategori);
    kategori = toupper(kategori);  //verilen karakteri buyuk harfe ceviriyor
     switch (kategori) {  //kullanicidan alinan veriye gore ilgili kategorinin kaydetme fonksiyonunu cagiriyor
        case 'E':
            et = et_ekle(et);
            break;
        case 'T':
            tarim_Urunleri = meyve_sebze_ekle(tarim_Urunleri);
            break;
        case 'S':
            sut_Urunleri = sut_urunu_ekle(sut_Urunleri);
            break;
        case 'K':
            konserveler = konserve_ekle(konserveler);
            break;
        case 'G':
            gidaDisi = gida_Disi_ekle(gidaDisi);
            break;
        default:
            printf("Boyle bir kategori yok");
    }
}
void urun_goster(struct e* et, struct t* tarim_Urunleri, struct s* sut_Urunleri, struct k* konserveler, struct g* gidaDisi){  //kayitli urunleri gosteren fonksiyon
    printf("--------------------------Kayitli Urunler--------------------------\n");

    struct e* son_et = et;
    while(son_et != NULL  && et->fiyat != 0){  //bu dongu kaydedilen etleri bastırır
        printf("\n%s %.2f TL %c %s %s", son_et->urun_adi, son_et->fiyat, son_et->kategori, son_et->paketleme_tarihi, son_et->son_kullanma_tarihi);
        if(son_et->sonraki != NULL)
            son_et = son_et->sonraki;
        else
            break;
    }
    struct t* sonuncu_urun = tarim_Urunleri;
    while(sonuncu_urun != NULL && tarim_Urunleri->fiyat != 0){  //bu dongu kaydedilen tarim urunlerini bastirir
        printf("\n %s %.2f TL %c %s", sonuncu_urun->urun_adi, sonuncu_urun->fiyat, sonuncu_urun->kategori, sonuncu_urun->alinma_tarihi);
        if(sonuncu_urun->sonraki != NULL)
            sonuncu_urun = sonuncu_urun->sonraki;
        else
            break;

    }
    struct s* sonuncu_urun2 = sut_Urunleri;
    while(sonuncu_urun2 != NULL && sut_Urunleri->fiyat != 0){  //bu dongu kaydedilen sut urunlerini bastirir
        printf("\n%s %.2f TL %s", sonuncu_urun2->urun_adi, sonuncu_urun2->fiyat,sonuncu_urun2->son_kullanma_tarihi);
        if(sonuncu_urun2->sonraki != NULL)
            sonuncu_urun2 = sonuncu_urun2->sonraki;
        else
            break;
    }
    struct k* sonuncu_urun3 = konserveler;
    while(sonuncu_urun3 != NULL && konserveler->fiyat != 0){  //bu dongu kaydedilen konserve urunlerini bastirir
        printf("\n%s %.2f TL %s %d%c", sonuncu_urun3->urun_adi, sonuncu_urun3->fiyat,sonuncu_urun3->son_kullanma_tarihi,sonuncu_urun3->reyon_numarasi,sonuncu_urun3->reyon_tarafi);
        if(sonuncu_urun3->sonraki != NULL)
            sonuncu_urun3 = sonuncu_urun3->sonraki;
        else
            break;
    }
    struct g* sonuncu_urun4 = gidaDisi;
    while(sonuncu_urun4 != NULL && gidaDisi->fiyat != 0){  //bu dongu kaydedilen gıda dışı urunleri bastırır
        printf("\n%s %.2f TL %c %d %c", sonuncu_urun4->urun_adi, sonuncu_urun4->fiyat,sonuncu_urun4->kategori,sonuncu_urun4->reyon_numarasi,sonuncu_urun4->reyon_tarafi);
        if(sonuncu_urun4->sonraki != NULL)
            sonuncu_urun4 = sonuncu_urun4->sonraki;
        else
            break;
    }
}

void arayuz(struct e* et, struct t* tarim_Urunleri, struct s* sut_Urunleri, struct k* konserveler, struct g* gidaDisi){  //kullanici arayuzu (ayni zamanda fonksiyonlari test etmek icin)
    setlocale(LC_ALL, "Turkish");
    char karakter = 'K';
    while(karakter == 'K' || karakter == 'G') {
        printf("\nUrun kaydetmek icin K,\nKayitli urunleri gostermek icin G,\nProgramdan cikmak icin C yaziniz.\n");

        scanf(" %c",&karakter);
        karakter = toupper(karakter);
        if(karakter == 'K'){
            urun_kaydet(et,tarim_Urunleri,sut_Urunleri,konserveler,gidaDisi);
        }else if(karakter == 'G'){
            urun_goster(et,tarim_Urunleri,sut_Urunleri,konserveler,gidaDisi);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Turkish");

    struct e *et_ilk = NULL;
    et_ilk = (struct e*)malloc(sizeof(struct e));
    et_ilk->sonraki = NULL;
    et_ilk->fiyat = 0;

    struct t *tarim_ilk = NULL;
    tarim_ilk = (struct t*)malloc(sizeof(struct t));
    tarim_ilk->sonraki = NULL;
    tarim_ilk->fiyat = 0;

    struct s *sut_ilk = NULL;
    sut_ilk = (struct s*)malloc(sizeof(struct s));
    sut_ilk->sonraki = NULL;
    sut_ilk->fiyat = 0;

    struct k *konserve_ilk = NULL;
    konserve_ilk = (struct k*)malloc(sizeof(struct k));
    konserve_ilk->sonraki = NULL;
    konserve_ilk->fiyat = 0;

    struct g* gidaDisi_ilk = NULL;
    gidaDisi_ilk = (struct g*)malloc(sizeof(struct g));
    gidaDisi_ilk->sonraki = NULL;
    gidaDisi_ilk->fiyat =  0;


    //arayuz(et_ilk,tarim_ilk,sut_ilk,konserve_ilk,gidaDisi_ilk);
    urun_kaydet(et_ilk,tarim_ilk,sut_ilk,konserve_ilk,gidaDisi_ilk);
    urun_kaydet(et_ilk,tarim_ilk,sut_ilk,konserve_ilk,gidaDisi_ilk);

    urun_goster(et_ilk,tarim_ilk,sut_ilk,konserve_ilk,gidaDisi_ilk);


    return 0;
}
