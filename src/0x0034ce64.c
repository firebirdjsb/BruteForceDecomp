/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B132BE79A6B8149AE947CA5252D912807E7E6BA4BF8F26AD4DED140CDADA9F08
 * Entry: 0x0034ce64, Ghidra index: 12990, label: FUN_0034ce64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_fef00088;
extern uint32_t DAT_fef00098;
extern uint32_t _DAT_fef00084;
extern uint32_t _DAT_fef00094;
extern uint32_t _DAT_fef00110;
extern uint32_t _DAT_fef00144;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034ce64(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_fef00110 = 0;
  iVar2 = 500;
  _DAT_fef00094 = 0;
  _DAT_fef00084 = 0;
  iVar1 = 500;
  do {
    iVar1 = iVar1 + -1;
    if (((DAT_fef00098 & 1) == 0) && ((DAT_fef00088 & 1) == 0)) break;
    KeStallExecutionProcessor(10);
  } while (iVar1 != 0);
  _DAT_fef00144 = 4;
  do {
    iVar2 = iVar2 + -1;
    if ((_DAT_fef00144 & 8) != 0) {
      _DAT_fef00144 = 0;
      return;
    }
    KeStallExecutionProcessor(10);
  } while (iVar2 != 0);
  _DAT_fef00144 = 0;
  return;
}
