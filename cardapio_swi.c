#include <stdio.h>

int main() {
    
    int codigo;
    float quantidade;
    
    scanf("%d %f", &codigo, &quantidade);
    
    switch (codigo) {
        
        case 1: 
                printf("%.2f", quantidade * 8.50);
                break;
                
        case 2: 
                printf("%.2f", quantidade * 9);
                break;
                
        case 3: 
                printf("%.2f", quantidade * 7.50);
                break;
        
        case 4:
                printf("%.2f", quantidade * 11);
                break;
        
        case 5:
                printf("%.2f", quantidade * 8.30);
                break;
        
    }
    
    
    
    return 0;
}
