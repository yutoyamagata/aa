int main()
{
    int A, B, C;
    
    A = 10;   // Aの年齢
    B = 15;   // Bの年齢
    C = 20;   // Cの年齢
    
    // 変数と定数の比較
    if (A+5 == 15)
        printf("Aは5年後15歳です\n");
    if (B != 15)
        printf("Bは15歳ではありません。\n");
    if (B-12 < 5)
        printf("Bは12年前5歳未満でした。\n");
    if (A < 10)
        printf("Aは10歳未満です。\n");
        
    // 変数と変数の比較
    if (A*2 == C)
        printf("Aの年齢を2倍するとCと同い年です。\n");
    if (A+B > C)
        printf("AとBを足した年齢はCより年上です。\n");
    
    
    return 0;
}