/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9632AB80A7C1959FF9D061EA238899F4EA6FE695A253F7B857DDDDED69AF0F22
 * Entry: 0x0015ba40, Ghidra index: 4537, label: FUN_0015ba40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Removing unreachable block (ram,0x0015ba67) */
/* WARNING: Removing unreachable block (ram,0x0015ba6b) */
/* WARNING: Removing unreachable block (ram,0x0015ba75) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0015ba40(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined1 *puStack_18;
  undefined1 local_4 [4];
  
  puStack_18 = local_4;
  *unaff_EBX = 0;
  (**(code **)(*unaff_ESI + 0xc))();
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  (**(code **)(*unaff_ESI + 0x18))();
  if (unaff_ESI != (int *)0x0) {
    puStack_18 = (undefined1 *)0x0;
    (**(code **)(*unaff_ESI + 0x10))();
    (**(code **)(puStack_18 + 0x20))(&puStack_18);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = s_23_23_ISchema_00406e3c;
      (**(code **)(s_23_23_ISchema_00406e3c._0_4_ + 4))(s_23_23_ISchema_00406e3c);
    }
    (**(code **)(s_23_23_ISchema_00406e3c._0_4_ + 8))(s_23_23_ISchema_00406e3c);
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return;
}
