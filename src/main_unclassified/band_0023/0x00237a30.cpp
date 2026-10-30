/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DF16778A27F5B865F9923320220D75A69C97CD7749FF9FE5911F86CD1F5C104
 * Entry: 0x00237a30, Ghidra index: 7854, label: FUN_00237a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00406c44;
extern uint32_t DAT_0040c798;
extern uint32_t DAT_004430e2;
extern uint32_t DAT_004698fc;
extern uint32_t DAT_0046cfa0;
void FUN_00237a30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iStack_4a8;
  int iStack_4a4;
  int iStack_4a0;
  int iStack_49c;
  undefined4 uStack_498;
  int iStack_494;
  undefined4 uStack_490;
  undefined1 auStack_484 [128];
  undefined1 auStack_404 [128];
  undefined1 auStack_384 [128];
  undefined1 auStack_304 [128];
  undefined1 auStack_284 [128];
  undefined1 auStack_204 [128];
  undefined1 auStack_184 [128];
  undefined1 auStack_104 [128];
  undefined1 auStack_84 [132];
  
  if (DAT_00406c44 != '\0') {
    RtlEnterCriticalSection(&DAT_0046cfa0);
    iVar2 = 0;
    iVar1 = 0;
    iStack_4a8 = 0;
    if (0 < DAT_004698fc) {
      psVar3 = &DAT_004430e2;
      iVar2 = 0;
      do {
        FUN_00237520();
        FUN_002eaa19(auStack_304,0x80,&DAT_0040c798,(int)*psVar3);
        FUN_002eaa19(auStack_84,0x80,&DAT_0040c798,iStack_4a4 + iStack_4a0);
        FUN_002eaa19(auStack_404,0x80,&DAT_0040c798,iStack_49c + iStack_494);
        FUN_002eaa19(auStack_104,0x80,&DAT_0040c798,iStack_4a4);
        FUN_002eaa19(auStack_204,0x80,&DAT_0040c798,iStack_49c);
        FUN_002eaa19(auStack_384,0x80,&DAT_0040c798,iStack_4a0);
        FUN_002eaa19(auStack_284,0x80,&DAT_0040c798,iStack_494);
        FUN_002eaa19(auStack_184,0x80,&DAT_0040c798,uStack_490);
        FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,uStack_498);
        iVar1 = iVar1 + iStack_4a0;
        iVar2 = iVar2 + iStack_4a4;
        iStack_4a8 = iStack_4a8 + 1;
        psVar3 = psVar3 + 0x10;
      } while (iStack_4a8 < DAT_004698fc);
    }
    FUN_00258e30();
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_4a4 + iStack_4a0);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_49c + iStack_494);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_4a4);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_49c);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_4a0);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iStack_494);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,uStack_490);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,uStack_498);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iVar2 + iStack_4a4 + iVar1 + iStack_4a0);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iVar2 + iStack_4a4);
    FUN_002eaa19(auStack_484,0x80,&DAT_0040c798,iVar1 + iStack_4a0);
    RtlLeaveCriticalSection(&DAT_0046cfa0);
  }
  FUN_00237f00(param_1);
  return;
}
