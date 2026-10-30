/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EAC3BED89CCEBA9266171F3CC9CB5757F6085F5FBB6460EA21247BFD241213E
 * Entry: 0x002a2710, Ghidra index: 9521, label: FUN_002a2710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_guest_insert_frame_6c.h"
/* Guest 0x002A2764 RET 0x6C removes 27 incoming DWORDs.
 * 0x002A2720 LEA ECX,[ESP+0x28] addresses guest_frame.word[9].
 * 0x002A2730 LEA ECX,[ESP+0x18] after four pushes addresses word[1].
 * The old C draft omitted that entire ECX/EAX register contract. */
void FUN_002a2710(bf_guest_insert_frame_6c guest_frame)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  float original_scalar;
  
  iVar1 = FUN_00238290();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    /* Original guest word[8] is loaded as raw IEEE-754 binary32 via
     * MOV EDX,[ESP+0x24], then pushed: do not numerically convert it. */
    memcpy(&original_scalar, &guest_frame.word[8], sizeof(original_scalar));
    puVar2 = FUN_002a27b0((uint32_t *)(uintptr_t)(uint32_t)iVar1,
                          guest_frame.word + 1,
                          guest_frame.word[0], guest_frame.word[7],
                          original_scalar, guest_frame.word + 9);
  }
  *puVar2 = 0;
  if ((undefined4 *)unaff_ESI[1] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_ESI[1] = puVar2;
    puVar2[1] = unaff_ESI[1];
    unaff_ESI[1] = puVar2;
    return;
  }
  puVar2[1] = 0;
  *unaff_ESI = puVar2;
  unaff_ESI[1] = puVar2;
  return;
}
