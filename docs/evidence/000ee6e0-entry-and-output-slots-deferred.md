# 0x000EE6E0: defer the incomplete entry and callback contract

Source unchanged; not a completed repair. The apparent first pointer-to-float
error is not safely resolved by changing one variable name.

The authenticated original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Entry `0x000EE6E0` has 1,432 original bytes with body SHA-256
`2B98946878E200395A9D07FF33D9F549FC172128570847261D4959C7D9DD90AC`.
The source is routed through `tools/source_layout.py` to
`src/main_unclassified/band_000e/0x000ee6e0.c`.

## Observed instructions

Let S be entry ESP. SUB ESP,0x2c and three register saves leave ESP=S-56.
The entry object pointer comes from S+4 before the saves. At 0x000ee6ec,
LEA EDX,[ESP+0x30] produces S-8, which is pushed for virtual slot +8.

Immediately after the call, FLD [ESP+0x30] / FADD [ESP+0x40] reads two
binary32 words. After PUSH EAX, FLD [ESP+0x38] / FADD [ESP+0x48] reads
another pair. The callback's actual target and cleanup are not established.
If it returns with RET 4, these pairs are callback output[0]+entry arg2 and
callback output[1]+entry arg3, respectively. This interpretation has coherent
two-float output storage, but must be verified against the callback target.

The current draft instead reads the unrelated `fStack_c`, numerically casts
the object pointer, then uses `local_8[0]` and `param_2` again for the second
sum. Replacing only `(float)param_1` with `param_2` would leave the producer
and second coordinate mapping unresolved.

At 0x000eec75 the function executes RET 0x20, while the current C draft
exposes seven arguments. Later draft casts of `param_4` to float are another
sign that the stack-argument/lifetime map is incomplete. No eighth argument,
changed prototype or guessed callback cleanup has been introduced.

## Next action and rejected shortcut

Recover all eight entry stack words from original callers. Resolve the
virtual +8 target's output extent and cleanup; then map the original local
offsets through each push and helper return. In particular, connect the first
two scalar sums to their actual callback outputs before correcting the later
scalar/pointer arguments and command stores. Review raw-word versus numeric
float transfers separately in the remaining graphics draft.

Rejected shortcut: the first error alone is not proof of a one-line scalar
argument fix. This note preserves the original observations and the conditional
mapping so another agent can continue without repeating disassembly. No source,
entry contract, compiler status, interface or behavior metric is promoted.
