/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08D64D4FF89C8E658BB9CDDA441CDB43A55F890E76EE86DC9CF893CA7721D581
 * Entry: 0x00076680, Ghidra index: 1379, label: FUN_00076680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00077820(void);

extern uint32_t PTR_LAB_003a2530;
void FUN_00076680(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 1;
  *unaff_ESI = PTR_LAB_003a2530;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[6] = in_EAX;
  if (*(int *)(in_EAX + 0x14) != 0) {
    FUN_00077820(in_EAX + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xfc | 4;
  return;
}
