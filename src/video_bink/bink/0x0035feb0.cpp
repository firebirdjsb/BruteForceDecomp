/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE3B9A017F31847F12ED380AA857D366575B43EB83DDF2B52F72AB200F7A94C6
 * Entry: 0x0035feb0, Ghidra index: 13223, label: FUN_0035feb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b10;
extern uint32_t DAT_00414b30;
extern uint32_t DAT_00414b38;
extern uint32_t DAT_004c07e0;
extern uint32_t _DAT_00414b1c;
extern uint32_t _DAT_00414b28;
extern uint32_t _DAT_00414b44;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035feb0(int param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  /* 0x35fed8..0x35ff2c: MOV DWORD code-address immediates.
   * ABI_UNVERIFIED: these uint32_t globals hold raw guest words. */
  if (DAT_004c07e0 == 1) {
    uVar1 = *in_ECX;
    if (((uVar1 & 1) == 0) || (0x2000 < uVar1)) {
      DAT_00414b38 = UINT32_C(0x0035fe10);
      DAT_00414b10 = UINT32_C(0x0035fe60);
      _DAT_00414b44 = *in_ECX;
      *in_ECX = 0x82;
      _DAT_00414b1c = UINT32_C(0x0035fa10);
      _DAT_00414b28 = UINT32_C(0x0035fae0);
      DAT_00414b30 = 1;
      return;
    }
    uVar1 = uVar1 + param_1 * 4;
    *in_ECX = uVar1;
    if ((uVar1 & 2) == 0) {
      DAT_00414b38 = UINT32_C(0x0035fa10);
      DAT_00414b10 = UINT32_C(0x0035fae0);
      return;
    }
  }
  DAT_00414b38 = UINT32_C(0x0035fbb0);
  DAT_00414b10 = UINT32_C(0x0035fc70);
  return;
}
