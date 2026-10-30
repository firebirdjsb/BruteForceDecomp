/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D515056596C05847C17270AB7489EDAE7586712D37B293773843C076C941F735
 * Entry: 0x0004f2e0, Ghidra index: 685, label: FUN_0004f2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400144;
extern uint32_t DAT_0040e6dc;
extern uint32_t DAT_00414b70;
extern uint32_t DAT_00414b74;
extern uint32_t *DAT_00469908;
extern char s_post_ai_load_0040e6c0[];
extern char s_pre_ai_load_0040e6d0[];
void FUN_0004f2e0(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 ***pppuVar5;
  int *unaff_ESI;
  int *piVar6;
  int *unaff_EDI;
  undefined4 uStack_44;
  undefined1 uStack_41;
  int *local_40;
  undefined4 local_3c;
  /* Distinct 32-bit stack slot selected by x86 LEA at 0x0004F4A9. */
  undefined4 local_38;
  uint local_34;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20;
  undefined4 **local_18;
  uint uStack_14;
  undefined4 local_8;
  uint local_4;
  
  local_4 = 0xf;
  local_8 = 0;
  local_18 = (undefined4 **)((uint)local_18 & 0xffffff00);
  DAT_00414b74 = FUN_002ea01d(0x10);
  if (DAT_00414b74 == 0) {
    DAT_00414b74 = 0;
  }
  else {
    *(undefined4 *)(DAT_00414b74 + 4) = 0;
    *(undefined4 *)(DAT_00414b74 + 8) = 0;
    *(undefined4 *)(DAT_00414b74 + 0xc) = 0;
  }
  puVar2 = (undefined1 *)FUN_002ea01d(0xc);
  if (puVar2 == (undefined1 *)0x0) {
    DAT_00414b70 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = uStack_41;
    iVar3 = FUN_00138fe0(puVar2);
    *(int *)(puVar2 + 4) = iVar3;
    *(undefined1 *)(iVar3 + 0x21) = 1;
    *(int *)(*(int *)(puVar2 + 4) + 4) = *(int *)(puVar2 + 4);
    *(undefined4 *)*(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 4);
    *(int *)(*(int *)(puVar2 + 4) + 8) = *(int *)(puVar2 + 4);
    *(undefined4 *)(puVar2 + 8) = 0;
    DAT_00414b70 = puVar2;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  pcVar1 = &DAT_0040e6dc;
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  FUN_0001fed0(&DAT_0040e6dc,pcVar4 + -0x40e6dc);
  FUN_0001f4f0(&DAT_00400144,0,0xffffffff);
  FUN_001e8a20();
  FUN_000784c0(0);
  FUN_000784c0(0);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_34);
  }
  local_40 = (int *)0x0;
  local_3c = 0;
  FUN_00237a30(s_pre_ai_load_0040e6d0);
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
    local_40 = (int *)0x0;
  }
  pppuVar5 = (undefined4 ***)local_18;
  if (local_4 < 0x10) {
    pppuVar5 = &local_18;
  }
  iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,pppuVar5,0x80000000,&local_40);
  piVar6 = (int *)0x0;
  if (-1 < iVar3) {
    /* x86 0x0004F434: LEA EAX,[ESP+0x14] at stable ESP=-0x50.
     This selects the existing 32-bit local_3c slot; callee ABI unverified. */
    iVar3 = FUN_001a23e0(&local_3c);
    piVar6 = unaff_ESI;
    if (-1 < iVar3) {
      local_40 = (int *)0x0;
      local_3c = 0;
      iVar3 = FUN_0023a790(0x10b50613,1);
      if (iVar3 != 0) {
        FUN_0004ece0(DAT_00414b70);
        FUN_0004ec10(DAT_00414b70,DAT_00414b74);
        FUN_0004eb00();
      }
      /* x86 0x0004F4A9: LEA ECX,[ESP+0x18] at ESP=-0x50.
         This selects local_38, not the preceding local_3c slot. */
      FUN_0004fb70(&local_38);
    }
  }
  FUN_00237a30(s_post_ai_load_0040e6c0);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  return;
}
