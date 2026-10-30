/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBD443D2C25C814BC1E61B8949A3ACF478EB8ADC75A90CC036CCDAAA0CF67ECC
 * Entry: 0x00086b80, Ghidra index: 1595, label: FUN_00086b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_0001f4d0(void);
extern void FUN_0001f4e0(undefined1 *param_1,undefined1 *param_2);

void FUN_00086b80(uint param_1)

{
  uint uVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar1 = param_1;
  if (in_EAX != param_1) {
    param_1 = param_1 & 0xffffff00;
    puVar3 = (uint *)(in_EAX + 0x38);
    do {
      if (0xf < *puVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar3[-5]);
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      uVar2 = FUN_0001f4d0(&param_1);
      FUN_0001f4e0(uVar2);
      if (7 < puVar3[-7]) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar3[-0xc]);
      }
      puVar3[-7] = 7;
      puVar3[-8] = 0;
      *(undefined2 *)(puVar3 + -0xc) = 0;
      in_EAX = in_EAX + 0x40;
      puVar3 = puVar3 + 0x10;
    } while (in_EAX != uVar1);
  }
  return;
}
