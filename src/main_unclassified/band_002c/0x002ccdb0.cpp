/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2673C0D1175EB0CC125938A68214FAF0C040183FF0B27959D44EC961E04EFF43
 * Entry: 0x002ccdb0, Ghidra index: 10155, label: FUN_002ccdb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_002d1b60(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ccdb0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  
  _DAT_00000000 = 0;
  uVar1 = *(undefined4 *)(in_ECX + 4);
  if (*param_1 <= (param_1[1] << 1) >> 1) {
    FUN_002d1b60();
  }
  *(undefined4 *)(param_1[2] + ((param_1[1] << 1) >> 1) * 4) = uVar1;
  uVar2 = param_1[1];
  param_1[1] = (((int)(uVar2 * 2) >> 1) + 1U ^ uVar2) & 0x7fffffff ^ uVar2;
  return;
}
