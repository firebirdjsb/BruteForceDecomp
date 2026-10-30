/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D577C778C6784BFF7C3EA47A2A672B126EAA8F39BA50037A8F7469FBCBF36EC
 * Entry: 0x0006c2c0, Ghidra index: 1224, label: FUN_0006c2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0006ec90(void);
extern void FUN_0006ed80(void);

extern uint32_t DAT_00414b78;
extern uint32_t DAT_00414b7c;
extern uint32_t DAT_00414b80;
extern uint32_t DAT_0046d034;
extern uint32_t _DAT_00414b88;
extern uint32_t _DAT_004a5858;
/* Ghidra-split 32-bit guest-memory slots in a contiguous original x86
 * MOVUPS/MOVSS copy region. These declarations are syntax-only storage
 * identities, not host mappings or validated cross-TU linker definitions. */
extern uint32_t uRam004a585c;
extern uint32_t uRam004a5860;
extern uint32_t uRam004a5864;
extern uint32_t uRam004a5868;
extern uint32_t uRam004a586c;
extern uint32_t uRam004a5870;
extern uint32_t uRam004a5874;
extern uint32_t uRam004a5878;
extern uint32_t uRam004a587c;
extern uint32_t uRam004a5880;
extern uint32_t uRam004a5884;
extern uint32_t uRam004a5888;
extern uint32_t uRam004a588c;
extern uint32_t uRam004a5890;
extern uint32_t uRam004a5894;
extern uint32_t _DAT_004a5868;
extern uint32_t _DAT_004a5878;
extern uint32_t _DAT_004a5888;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c2c0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_80 [48];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = (**(code **)(*(int *)(in_EAX + 0x48) + 0x14))();
  iVar2 = FUN_002338c0(&uStack_50,&DAT_0046d034,uVar1);
  FUN_0003d6c0(auStack_80,iVar2,iVar2 + 0x24);
  FUN_0006ec90();
  _DAT_004a5858 = uStack_50;
  uRam004a585c = uStack_4c;
  uRam004a5860 = uStack_48;
  uRam004a5864 = uStack_44;
  _DAT_004a5868 = uStack_40;
  uRam004a586c = uStack_3c;
  uRam004a5870 = uStack_38;
  uRam004a5874 = uStack_34;
  _DAT_004a5878 = uStack_30;
  uRam004a587c = uStack_2c;
  uRam004a5880 = uStack_28;
  uRam004a5884 = uStack_24;
  _DAT_004a5888 = uStack_20;
  uRam004a588c = uStack_1c;
  uRam004a5890 = uStack_18;
  uRam004a5894 = uStack_14;
  if (DAT_00414b80 == in_EAX) {
    DAT_00414b7c = DAT_00414b7c + 1;
  }
  else {
    DAT_00414b7c = 1;
    DAT_00414b78 = 0;
    DAT_00414b80 = in_EAX;
  }
  _DAT_00414b88 = in_EAX;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  if ((0 < DAT_00414b7c) && (DAT_00414b78 != 0)) {
    FUN_0006ed80();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  return;
}
