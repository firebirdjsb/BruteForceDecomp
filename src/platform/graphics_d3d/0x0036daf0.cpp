/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA51A980E87CCA22398B8EA241A44D3D8722E2EE5C1965681C38549C46A258CE
 * Entry: 0x0036daf0, Ghidra index: 13295, label: FUN_0036daf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df94;
uint FUN_0036daf0(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = DAT_0037df94;
  if (DAT_0037df94 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) != 0) {
    in_EAX = in_EAX | 1;
  }
  if ((uVar1 & 2) != 0) {
    in_EAX = in_EAX | 2;
  }
  if ((uVar1 & 4) != 0) {
    in_EAX = in_EAX | 3;
  }
  if ((int)uVar1 < 0) {
    in_EAX = in_EAX | 8;
  }
  return in_EAX << 5 | 1;
}
