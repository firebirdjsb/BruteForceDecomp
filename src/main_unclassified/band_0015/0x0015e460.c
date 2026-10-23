/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7389CEBE427AF3FBE83A2A75B949C7A71D61E303BAAA1B085B9A357B80678779
 * Entry: 0x0015e460, Ghidra index: 4546, label: FUN_0015e460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
uint FUN_0015e460(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x220);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    (**(code **)(*DAT_00469b54 + 8))();
    iVar1 = FUN_0015bc10();
  }
  *param_1 = iVar1;
  return (iVar1 != 0) - 1 & 0x80004005;
}
