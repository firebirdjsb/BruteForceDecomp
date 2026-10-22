/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F814407E08341093825E154C32902890FF399B9A8B7F81B53FA1035022B5891
 * Entry: 0x002f0f5e, Ghidra index: 10767, label: __get_osfhandle
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Release */

undefined4 __get_osfhandle(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_004a8e98) &&
     (puVar1 = (undefined4 *)((&DAT_004a8ea0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8),
     (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  DAT_0040f4dc = 0;
  _DAT_0040f4d8 = 9;
  return 0xffffffff;
}
