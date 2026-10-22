/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 841364E2E12CB21D2CC637A4AA5E714A7459A08A1B377A06AE92FA3199A5AD77
 * Entry: 0x001d6050, Ghidra index: 6347, label: FUN_001d6050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6050(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 *in_EAX;
  undefined2 *puVar2;
  int unaff_EBX;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined2 **)(unaff_EBX + 8);
    puVar2 = param_1;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 **)(unaff_EBX + 8) = puVar2;
  }
  *in_EAX = param_1;
  return;
}
