/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15087E3314805B3C0429584EE2D7183B1D79A93C1F62BB7CDC70890AE12A1D8B
 * Entry: 0x00059b60, Ghidra index: 896, label: FUN_00059b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000e0c80(void);

extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_003a3f30;
extern uint32_t PTR_LAB_003a3f18;
void FUN_00059b60(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[3] = PTR_FUN_0039a828;
  unaff_ESI[2] = PTR_FUN_0039c2a0;
  unaff_ESI[3] = PTR_FUN_0039a828;
  unaff_ESI[4] = 0;
  unaff_ESI[1] = 0xed0305a6;
  *unaff_ESI = PTR_FUN_003a3f30;
  unaff_ESI[2] = PTR_LAB_003a3f18;
  unaff_ESI[3] = PTR_FUN_0039e7e8;
  uVar1 = FUN_000e0c80(unaff_ESI + 0xb);
  unaff_ESI[0xc] = uVar1;
  unaff_ESI[0xd] = 0;
  unaff_ESI[9] = unaff_ESI[9] & 0xfffff000;
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[10] = unaff_ESI[10] & 0xffffffe4 | 4;
  unaff_ESI[9] = unaff_ESI[9] & 0xffff4fff | 0x4000;
  unaff_ESI[8] = 0xbf800000;
  *(undefined2 *)((int)unaff_ESI + 0x26) = 0xffff;
  return;
}
