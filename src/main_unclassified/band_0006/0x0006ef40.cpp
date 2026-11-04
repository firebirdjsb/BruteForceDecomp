/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA98F3A1723486CFBE1D4AA92FCF6BF3D853CA762B25998F0F422C937CBE11EB
 * Entry: 0x0006ef40, Ghidra index: 1257, label: FUN_0006ef40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2614;
void FUN_0006ef40(void)

{
  undefined4 *in_EAX;
  uint in_ECX;
  int iVar1;
  uint uVar2;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  /* XBE 0x0006ef5d: MOV m32,0x003a2614 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x003a2614);
  in_EAX[0x43] = 0xfffffffa;
  in_EAX[0x44] = 0x1188000;
  in_EAX[0x46] = 0xffffffff;
  if ((in_ECX != 0) &&
     (uVar2 = -(uint)((*(byte *)(in_ECX + 0x26) & 0x40) != 0) & in_ECX, uVar2 != 0)) {
    iVar1 = *(int *)(uVar2 + 0x6c);
    if (*(int *)(iVar1 + 0x10) != 0) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    in_EAX[0x46] = iVar1;
  }
  return;
}
