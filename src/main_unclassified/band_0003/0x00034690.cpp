/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8853849F1CD406A2C1FCA24B2B9C13652B0F2F3231B25271266DDBA51BDC762C
 * Entry: 0x00034690, Ghidra index: 343, label: FUN_00034690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_00055aa0(void);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00034690(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_1c;
  
  if (*(int *)(in_ECX + 0x8f4) != 0) {
    if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0) {
      cVar1 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
      if (cVar1 == '\0') {
        iVar2 = FUN_00055aa0();
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 2;
        *(byte *)(in_ECX + 0x1dc) = *(byte *)(in_ECX + 0x1dc) | 2;
        return 1;
      }
      local_1c = 2;
      iVar2 = FUN_00055aa0();
      if (2 < *(int *)(iVar2 + 0x94)) {
        iVar2 = FUN_00055aa0();
        local_1c = *(undefined4 *)(iVar2 + 0x94);
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x40,param_1,local_1c,1,1);
      return 1;
    }
  }
  return 2;
}
