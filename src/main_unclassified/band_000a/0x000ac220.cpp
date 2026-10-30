/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 174BD02AAA64BEDD81AED31F7777DCD66FBB5A545D37F00740283AE421BAA145
 * Entry: 0x000ac220, Ghidra index: 2059, label: FUN_000ac220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000ac160(void);
extern void FUN_000ac370(void);
extern void FUN_000ac500(int param_1);
extern void FUN_000ab860(void);
extern void FUN_000ac5e0(void);
extern void FUN_000ac7f0(void);

void FUN_000ac220(int param_1,float param_2)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x74) != 0.0) {
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) - param_2;
    if (*(float *)(param_1 + 0x74) < 0.0) {
      FUN_000ac160();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    if (*(float *)(param_1 + 0x70) <= 0.0) goto LAB_000ac2e6;
    fVar1 = *(float *)(param_1 + 0x70) - param_2 * 3.0;
  }
  else {
    if ((*(float *)(param_1 + 0x70) <= 0.75) || (*(float *)(param_1 + 0x74) < 0.4)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else {
      FUN_000ac370(param_2);
    }
    if (1.0 <= *(float *)(param_1 + 0x70)) goto LAB_000ac2e6;
    fVar1 = param_2 + param_2 + *(float *)(param_1 + 0x70);
  }
  *(float *)(param_1 + 0x70) = fVar1;
LAB_000ac2e6:
  fVar1 = *(float *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x70) <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x70) = fVar1;
  FUN_000ac500(param_1,param_2);
  FUN_000ab860();
  FUN_000ac5e0();
  FUN_000ac7f0();
  return;
}
