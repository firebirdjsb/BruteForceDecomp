/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10BA1AA0CFDD455852068FC536991D6BC8E08F1265846CBED916B9C2F16B323B
 * Entry: 0x0008dc50, Ghidra index: 1718, label: FUN_0008dc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008ea90(void);

extern uint32_t PTR_FUN_003a2068;
void FUN_0008dc50(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_003a2068;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  if (unaff_ESI + 1 != (undefined4 *)0x0) {
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
    unaff_ESI[9] = 0;
    unaff_ESI[8] = 0;
  }
  FUN_0008ea90();
  return;
}
