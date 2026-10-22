/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E872A3C10830FEAED1CD368BC31773EBD2A90E15FAC53A9C708D3632E65FEAB
 * Entry: 0x0033d24c, Ghidra index: 12575, label: FUN_0033d24c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b094a;
void FUN_0033d24c(void)

{
  int in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar1;
  
  FUN_0033be1d(*(undefined4 *)(in_ECX + 0x844));
  *(undefined1 *)(extraout_ECX[0x20b] * 0x200 + extraout_ECX[0x20c] + extraout_ECX[3]) = 0x2a;
  piVar1 = extraout_ECX;
  if ((*(short *)(&DAT_004b094a + *extraout_ECX * 10) != 0) && (extraout_ECX[0x212] != 0)) {
    FUN_0033bda0(0);
    *(undefined1 *)(extraout_ECX_00[0x20b] * 0x200 + extraout_ECX_00[0x20c] + extraout_ECX_00[3]) =
         0x2a;
    piVar1 = extraout_ECX_00;
  }
  piVar1[0x211] = (uint)*(ushort *)(&DAT_004b0948 + *piVar1 * 10);
  return;
}
