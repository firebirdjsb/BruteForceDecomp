/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B66103CB68B1E8FCFCCE9D70AD593A11733BF6841CD87BDC27A2F27A023A641C
 * Entry: 0x0013cad0, Ghidra index: 4009, label: FUN_0013cad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0013cad0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar3 = *(int *)(in_ECX + 0x18);
  if (((*(byte *)(iVar3 + 0x748) & 8) == 0) && (*(int *)(iVar3 + 0x1f8) != 0)) {
    iVar1 = *(int *)(iVar3 + 0x1fc);
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x534);
    }
    if ((iVar4 != 0) &&
       (((((iVar1 == 0 || ((*(byte *)(iVar1 + 0x250) & 4) != 0)) ||
          ((*(byte *)(iVar1 + 0x252) & 2) == 0)) ||
         ((*(int *)(iVar3 + 0x214) == 0 || ((*(byte *)(*(int *)(iVar3 + 0x214) + 0x3c) & 1) != 0))))
        || ((*(int *)(iVar3 + 0x218) == 0 || ((*(byte *)(*(int *)(iVar3 + 0x218) + 0x3c) & 1) != 0))
           )))) {
      if (((*(byte *)(in_ECX + 0x1c) & 1) == 0) || (iVar3 == 0)) {
        iVar3 = *(int *)(iVar3 + 0x2e8);
        cVar2 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
        if ((cVar2 == '\0') || (*(int *)(iVar3 + 0x198) == 0)) {
          iVar3 = FUN_0014d2e0();
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1f8) != 0)) {
            cVar2 = FUN_0010e470();
            if (cVar2 != '\0') {
              if (**(int **)(iVar3 + 0x228) == *(int *)(in_ECX + 0x44)) {
                *(byte *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x48) | 1;
                return 2;
              }
              *(byte *)(in_ECX + 0x48) = *(byte *)(in_ECX + 0x48) & 0xfe;
              FUN_00123ea0();
            }
          }
        }
      }
      else {
        cVar2 = FUN_0010e3e0();
        if (cVar2 != '\0') {
          return (*(byte *)(in_ECX + 0x48) & 1) << 1;
        }
      }
    }
  }
  return 0;
}
