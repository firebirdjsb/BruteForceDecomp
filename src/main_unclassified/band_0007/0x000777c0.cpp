/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A8051C56FF4214A5264472724F6A1E8C8275A2B4849DC0AE842C9EC721EF823
 * Entry: 0x000777c0, Ghidra index: 1401, label: FUN_000777c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000765d0(undefined4 *param_1);

void FUN_000777c0(int param_1,int param_2)

{
  undefined4 unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_000765d0(unaff_EBX);
  }
  return;
}
