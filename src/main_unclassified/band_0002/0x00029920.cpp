/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A68027D71412614FEF71505C709C4B8C057622A7572C90D7E98A2F5E32CA2A5D
 * Entry: 0x00029920, Ghidra index: 279, label: FUN_00029920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00029920(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8f4) != 0) {
    if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0) {
      cVar1 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,
                           *(undefined4 *)(in_ECX + 0x4b8));
      FUN_000255d0(param_1,0);
      if (cVar1 == '\0') {
        return 2;
      }
      FUN_0004d970(in_ECX + -0x40,param_1,3,1,1);
      return 1;
    }
  }
  return 0;
}
