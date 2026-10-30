/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5451998E8F5B01F5B7F95245E22494F402283D01C8732D98B8E913BC15CCB33D
 * Entry: 0x00104200, Ghidra index: 3312, label: FUN_00104200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c060c;
extern uint32_t PTR_FUN_0039e204;
void FUN_00104200(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_0039e204;
  puVar1 = unaff_ESI + 0x21;
  iVar2 = 0x20;
  do {
    puVar1[-0x20] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(byte *)(unaff_ESI + 0x45) = *(byte *)(unaff_ESI + 0x45) & 0xf0;
  unaff_ESI[0x41] = 0xffffffff;
  unaff_ESI[0x42] = 0xffffffff;
  unaff_ESI[0x46] = 0;
  unaff_ESI[0x47] = 0;
  unaff_ESI[0x48] = 0;
  unaff_ESI[0x49] = 0;
  unaff_ESI[0x4b] = 0;
  unaff_ESI[0x4a] = 0;
  unaff_ESI[0x44] = 0;
  unaff_ESI[0x4c] = DAT_003c060c;
  unaff_ESI[0x43] = 0;
  FUN_00104330();
  return;
}
