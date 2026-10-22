/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6141EF33853F1F0941B63A0D1B8AC125DFD5AE07B5EF2BD69F753EAD086428EE
 * Entry: 0x00179b40, Ghidra index: 4991, label: FUN_00179b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399db0;
void FUN_00179b40(void)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = &PTR_LAB_00399db0;
  unaff_ESI[1] = *(undefined4 *)(unaff_EDI + 4);
  FUN_00179c00();
  unaff_ESI[0x1d] = *(undefined4 *)(unaff_EDI + 0x74);
  unaff_ESI[0x1e] = *(undefined4 *)(unaff_EDI + 0x78);
  *(undefined1 *)(unaff_ESI + 0x1f) = *(undefined1 *)(unaff_EDI + 0x7c);
  bVar1 = *(byte *)((int)unaff_ESI + 0x7d) ^
          (*(byte *)((int)unaff_ESI + 0x7d) ^ *(byte *)(unaff_EDI + 0x7d)) & 1;
  *(byte *)((int)unaff_ESI + 0x7d) = bVar1;
  bVar1 = (*(byte *)(unaff_EDI + 0x7d) ^ bVar1) & 2 ^ bVar1;
  *(byte *)((int)unaff_ESI + 0x7d) = bVar1;
  *(byte *)((int)unaff_ESI + 0x7d) = (*(byte *)(unaff_EDI + 0x7d) ^ bVar1) & 4 ^ bVar1;
  return;
}
