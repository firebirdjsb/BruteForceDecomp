/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 913FB1E95FBE29A61E4B523628D0BA017B25B64FD2A86F028AFC106039AE1FCD
 * Entry: 0x00126730, Ghidra index: 3711, label: FUN_00126730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00126730(void)

{
  uint in_ECX;
  int unaff_ESI;
  uint local_4;
  
  local_4 = in_ECX;
  if ((*(byte *)(unaff_ESI + 0x818) & 4) != 0) {
    local_4 = *(uint *)(unaff_ESI + 0x82c) ^ *(uint *)(unaff_ESI + 4);
    FUN_00141180(&local_4);
    *(byte *)(unaff_ESI + 0x818) = *(byte *)(unaff_ESI + 0x818) & 0xfb;
  }
  *(byte *)(unaff_ESI + 0x818) = *(byte *)(unaff_ESI + 0x818) & 0xfb;
  *(undefined4 *)(unaff_ESI + 0x824) = 0;
  *(undefined1 *)(unaff_ESI + 0x828) = 0;
  if (*(int *)(unaff_ESI + 0x820) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x820),0);
    *(undefined4 *)(unaff_ESI + 0x820) = 0;
  }
  return;
}
