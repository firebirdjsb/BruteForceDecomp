/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACF7794DF6BEE4FA255F356ABBAF1CF2ED5685EAE776F7945A5C7E9FDF935A5B
 * Entry: 0x00257da0, Ghidra index: 8463, label: FUN_00257da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046990c;
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00257da0(void)

{
  char cVar1;
  int *in_EAX;
  char *__nptr;
  long lVar2;
  undefined4 unaff_EBP;
  int iVar3;
  int *unaff_EDI;
  int *piVar4;
  int *piStack_28;
  int *piStack_24;
  int *local_10;
  int *local_c;
  int *piStack_8;
  
  local_c = in_EAX;
  if (in_EAX != (int *)0x0) {
    piStack_28 = (int *)0x257db7;
    (**(code **)(*in_EAX + 4))();
  }
  local_10 = (int *)0x0;
  while( true ) {
    if (local_10 != (int *)0x0) {
      piStack_28 = (int *)0x257dcd;
      piStack_24 = local_10;
      (**(code **)(*local_10 + 8))();
      local_10 = (int *)0x0;
    }
    piStack_24 = (int *)0x0;
    piStack_28 = local_c;
    piVar4 = DAT_0046990c;
    (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0xe07067e);
    if (piStack_24 != (int *)0x0) break;
    (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,&stack0xffffffe4);
    piVar4 = piStack_24;
    if (piStack_24 == (int *)0x0) goto LAB_00257ecb;
    if (piStack_28 != (int *)0x0) {
      (**(code **)(*piStack_28 + 8))(piStack_28);
      piStack_28 = (int *)0x0;
    }
    (**(code **)(*piVar4 + 0x10))(piVar4,s_23_23_ISchema_00406e3c,&piStack_28);
    if (piStack_8 != (int *)0x0) {
      piStack_24 = piStack_8;
      piStack_28 = (int *)0x257e43;
      (**(code **)(*piStack_8 + 8))();
      piStack_8 = (int *)0x0;
    }
  }
  (**(code **)(*DAT_0046990c + 0x2c))(DAT_0046990c,&stack0xffffffe8,piStack_24);
  iVar3 = 0;
  if (0 < (int)unaff_EDI) {
    do {
      piStack_24 = (int *)0x0;
      (**(code **)(*DAT_0046990c + 0x30))(DAT_0046990c,&local_10,iVar3,&piStack_24);
      cVar1 = (**(code **)(*piVar4 + 0x5c))(piVar4,piStack_24);
      if ((cVar1 == '\x01') && (__nptr = (char *)FUN_00257d20(unaff_EBP), __nptr != (char *)0x0)) {
        lVar2 = _atol(__nptr);
        *local_10 = lVar2;
        if (piStack_24 != (int *)0x0) {
          (**(code **)(*piStack_24 + 8))(piStack_24);
          piStack_24 = (int *)0x0;
        }
        if (&local_10 != (int **)0x0) {
          (*(code *)local_10[2])(&local_10);
        }
        if (piStack_28 != (int *)0x0) {
          (**(code **)(*piStack_28 + 8))(piStack_28);
        }
        return 0;
      }
      if (piStack_24 != (int *)0x0) {
        (**(code **)(*piStack_24 + 8))(piStack_24);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)unaff_EDI);
  }
LAB_00257ecb:
  if (&local_10 != (int **)0x0) {
    (*(code *)local_10[2])(&local_10);
  }
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 8))(piStack_28);
  }
  return 0x80004005;
}
