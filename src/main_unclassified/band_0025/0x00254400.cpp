/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 985FB83A9854B3D44AA5C7B9BB7974EC1250A98283C4A7801023BD77DEF2EBEE
 * Entry: 0x00254400, Ghidra index: 8413, label: FUN_00254400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
extern char s_23_23_ISchema_00406e3c[];
/* Retail XBE: 0x254420 LEA EAX,[ESP+20h] addresses entry ESP+4;
 * both exits RET 0Ch (0x254498, 0x2544a5). This records incoming
 * guest stack storage only; virtual-call ABI remains unverified. */
typedef struct { undefined4 word_04; undefined1 opaque_tail[8]; } bf_00254400_guest_record;
_Static_assert(sizeof(bf_00254400_guest_record) == 12, "ret 0ch guest bytes");
int FUN_00254400(bf_00254400_guest_record guest_record)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  int *piVar2;
  undefined4 uVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 local_4;
  
  iStack_14 = *(int *)(in_EAX + 0x18);
  if (iStack_14 != 0) {
    puStack_18 = &local_4;
    iStack_1c = 1;
    puStack_20 = &guest_record.word_04;
    local_4 = 0;
    (**(code **)(*DAT_004432fc + 0x24))(DAT_004432fc,1);
    if (iStack_1c != 0) {
      ppuVar4 = &puStack_20;
      uVar3 = 1;
      puStack_20 = (undefined1 *)0x0;
      piVar2 = DAT_004432fc;
      iVar1 = (**(code **)(*DAT_004432fc + 0x40))(DAT_004432fc,1,unaff_EDI,ppuVar4,iStack_1c);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,s_23_23_ISchema_00406e3c,puStack_20);
      }
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      if (ppuVar4 != (undefined1 **)0x0) {
        (**(code **)(*ppuVar4 + 8))(ppuVar4,piVar2,uVar3,0);
      }
      return iVar1;
    }
  }
  return -0x7fffbffb;
}
