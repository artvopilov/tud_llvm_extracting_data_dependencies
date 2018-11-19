bool runOnFunction (Function &F) override{
	for (Function::iterator bb = F.begin(), e = F.end(); bb != e; bb++) {
		for (BasicBlock::iterator i = bb->begin(), ie = bb->end(); i != ie; i++) {
			Instruction* inst = dyn_cast<Instruction>(i);
			// if (inst->getOpcode() == Instruction::Add) {
				for (Use &U: inst->operands()) {
					Value *v = U.get();
					errs() << *v >> "\n";
				}
			// }
		}
	}
	return false;
}