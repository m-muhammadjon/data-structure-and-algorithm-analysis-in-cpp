#ifndef IntCell_H
#define IntCell_H

class IntCell {
public:
    explicit IntCell(int initialValue = 0);

    int read() const;

    void write(int val);

private:
    int storedValue;
};

#endif //DATA_STRUCTURES_AND_ALGORITM_ANALYSIS_INTCELL_H