#include <stdio.h>
#include <string.h>

int main (void)
{
    char *text[] = {
        "日本語",
        "にほんご",
        "ニホンゴ",
        "ﾆﾎﾝｺﾞ",
        "Japanese",
        "亜唖娃阿哀愛挨姶逢葵茜穐悪握渥旭",
        "院陰隠韻吋右宇烏羽迂雨卯鵜窺丑碓",
        "臼渦嘘唄欝蔚鰻姥厩浦瓜閏噂云運雲",
        "荏餌叡営嬰影映曳栄永泳洩瑛盈穎頴",
        "英衛詠鋭液疫益駅悦謁越閲榎厭円園",
        "堰奄宴延怨掩援沿演炎焔煙燕猿縁艶",
        "苑薗遠鉛鴛塩於汚甥凹央奥往応",
        //"İñţëŕňâťĭôŋàłīżæŧɨøņ", // Latin with additional marks
        "αβγδεζηθικλμνξοπρστυφχψω", // Greek
        "абвгдежзийклмнопрстуфхцчшщъыьэюя", // Cyrillic (Russian,...)
        //"대한민국", // Hangul (Korean, four characters)
        //"ԱԲԳԴԵԶԷԸԹԺԻԼԿ", // Armenian
        NULL,
    };
    char **p = text;

    while (*p) {
        printf ("%s; size (in bytes): %d\n", *p, strlen(*p));
        p++;
    }
}
