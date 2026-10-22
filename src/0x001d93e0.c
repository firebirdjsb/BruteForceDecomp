/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC8F685633B2C92F480496B3C2B6D50C95EC02278642025062F3F685C16A0371
 * Entry: 0x001d93e0, Ghidra index: 6463, label: FUN_001d93e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d93e0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 8);
    puVar2 = (undefined4 *)(param_4 + 8);
    do {
      *(undefined4 *)(param_4 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      puVar2[-9] = puVar1[-9];
      param_3 = param_3 + -0x20;
      param_4 = param_4 + -0x20;
      puVar2[-8] = puVar1[-8];
      puVar2[-7] = puVar1[-7];
      puVar2[-6] = puVar1[-6];
      puVar2[-5] = puVar1[-5];
      puVar2[-4] = puVar1[-4];
      puVar2[-3] = puVar1[-3];
      puVar1 = puVar1 + -8;
      puVar2 = puVar2 + -8;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
