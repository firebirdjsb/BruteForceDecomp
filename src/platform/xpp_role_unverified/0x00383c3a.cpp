/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C406637B5C9CD2D7CDDB77208347EDBB32E846D7091DA1DF0F4C8C15768564FF
 * Entry: 0x00383c3a, Ghidra index: 13632, label: FUN_00383c3a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void FUN_003822f9(void);
extern void FUN_00382300(void);
void FUN_00383c3a(byte *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *param_1 >> 4 & 1;
  if ((bVar1 == 0) || (param_2 != 0)) {
    if ((bVar1 == 0) && (param_2 != 0)) {
      FUN_003822f9();
      *param_1 = *param_1 | 0x10;
    }
  }
  else {
    FUN_00382300();
    *param_1 = *param_1 & 0xef;
  }
  return;
}
