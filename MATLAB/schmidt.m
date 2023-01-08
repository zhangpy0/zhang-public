function answer=schmidt(matrixIn,transpose)
% 矩阵列向量为待正交化向量, 
% schmidt(A)
if nargin>1
    % 取矩阵行向量为待正交化向量
    % 函数调用方式为 schmidt(A,1)
    % 结果矩阵仍然是列向量为正交化之后的向量
    if transpose==1
       matrixIn=matrixIn';
    end
end
answer=zeros(size(matrixIn));
answer(:,1)=matrixIn(:,1);
if size(matrixIn,2)>1
    for column=1:size(matrixIn,2)
        %正交化
        for beta=1:column-1
            answer(:,column)=answer(:,column)-dot(matrixIn(:,column),answer(:,beta))/dot(answer(:,beta),answer(:,beta))*answer(:,beta);
        end
        answer(:,column)=answer(:,column)+matrixIn(:,column);
        %单位化
        answer(:,column)=answer(:,column)/sqrt(sum(answer(:,column).^2));
    end
end
end