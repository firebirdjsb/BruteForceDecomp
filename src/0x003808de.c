/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AF531D6AB993A8777FB92FE972B7B30BED4FE0A05015C6A71E0D638AF3FDC14
 * Entry: 0x003808de, Ghidra index: 13535, label: FUN_003808de
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041267a;
extern uint32_t DAT_00412698;
extern uint32_t DAT_00412699;
extern uint32_t DAT_004126b4;
extern uint32_t DAT_004126b5;
extern uint32_t DAT_004126b6;
extern uint32_t DAT_004126c0;
extern uint32_t DAT_004126c1;
extern uint32_t _DAT_004126a0;
extern uint32_t _DAT_004126a4;
extern uint32_t _DAT_004126a8;
extern uint32_t _DAT_004126ac;
extern uint32_t _DAT_004126b0;
extern uint32_t _DAT_004126c2;
extern uint32_t _DAT_004126c4;
extern uint32_t _DAT_004126c6;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003808de(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_003810bd();
  if ((*(char *)(iVar1 + 5) == '\x03') && (*(char *)(iVar1 + 7) == '\x01')) {
    DAT_00412698 = 0x30;
    DAT_00412699 = 0x40;
    _DAT_004126a0 = 0x380653;
    _DAT_004126a4 = param_2;
    _DAT_004126a8 = 0;
    _DAT_004126b0 = 0;
    _DAT_004126ac = 0;
    DAT_004126b4 = 0;
    DAT_004126b5 = 1;
    DAT_004126b6 = 0;
    DAT_004126c0 = 0x21;
    DAT_004126c1 = 0xb;
    _DAT_004126c2 = 0;
    _DAT_004126c4 = (ushort)*(byte *)((int)param_2 + 5);
    _DAT_004126c6 = 0;
    FUN_0038006c();
    FUN_00381379(&DAT_00412698);
  }
  else {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfe;
    *param_2 = 0;
    DAT_0041267a = DAT_0041267a + -1;
    FUN_00380fc8(0);
    FUN_0038274f(0x80000400);
  }
  return;
}
